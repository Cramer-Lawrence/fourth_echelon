# Challenge 02 — What Did My Program Actually Do?

## Scenario

You have a tiny executable that you understand at the source, object, symbol, linker, and assembly layers.

Now treat the executable as a black box from the operating system's point of view.

A teammate asks a deceptively simple question:

> When I launch this program, what does Windows actually do?

The program appears trivial, but a running program exists inside a much larger operating-system environment. Your job is to observe that environment and build an evidence-backed account of the program's lifetime.

Do not assume that an operation happened merely because it seems likely. Do not assume an event belongs to your source code merely because it occurred while your program was running.

The goal is to begin crossing the boundary:

```text
Executable on disk → Process → Threads / Modules / OS activity → Exit
```

---

## Modes

- Investigate
- Research

---

## Environment

Use your real Windows development setup.

Primary tools should include:

- the `main.exe` produced in Challenge 01
- Process Monitor (Sysinternals)
- Process Explorer (Sysinternals) when a live snapshot is useful
- MSVC / DUMPBIN when static binary evidence helps answer a runtime question
- Rider terminal, PowerShell, Explorer, or another launcher when comparing process ancestry

You write any source changes yourself.

---

## Adaptation From Challenge 01

Challenge 01 demonstrated that you can work from raw tool output, form a model, and correlate multiple representations without needing every step prescribed.

This challenge therefore gives you somewhat more responsibility for:

- designing useful filters
- deciding which events matter
- separating observation from interpretation
- choosing comparison runs
- deciding what additional evidence would test a hypothesis

If a trace looks noisy, do not ask for the answer first. Ask what filter or controlled experiment would make the question smaller.

---

## Part 0 — Establish the Runtime Model

Before tracing, read enough authoritative material to distinguish an executable from a process and understand what Process Monitor can actually observe.

### Read

**Microsoft — About Processes and Threads**  
https://learn.microsoft.com/en-us/windows/win32/procthread/about-processes-and-threads

**Microsoft Sysinternals — Process Monitor**  
https://learn.microsoft.com/en-us/sysinternals/downloads/procmon

Do not attempt to learn the entire Win32 process API.

### Questions to investigate

- Is an `.exe` itself a process?
- What new identity exists once the program is running?
- What is a PID?
- What is the relationship between a process and its threads?
- What categories of activity can Process Monitor observe?
- What kinds of program behavior might *not* be visible in Process Monitor?

Write a short prediction of what you expect to observe when launching your tiny program before capturing anything.

---

## Part 1 — Capture One Clean Lifetime

Run `main.exe` under Process Monitor and isolate one execution as cleanly as you can.

Do not accept thousands of unrelated system events as your evidence set. Learn enough of Process Monitor's filtering model to reduce the trace to something you can reason about.

Capture the program from process creation through process exit.

### Determine from evidence

- process ID
- parent process ID / parent process
- image path
- command line, if available
- user / security context information that is visible
- process start and exit
- whether more than one thread appears during the lifetime

### Questions to investigate

- Which event marks the beginning of the process lifetime?
- Which event marks the end?
- Which process launched it?
- Did that match your expectation?
- Does the process outlive the executable file on disk, or is that the wrong way to think about their relationship?

Retain the filtered trace or an exported form that can be reopened later.

---

## Part 2 — Explain the Unexpected Activity

Your source code is tiny. The operating-system trace probably is not.

Classify the activity you observe rather than merely scrolling through it.

Possible categories may include:

- process/thread activity
- image / DLL loading
- filesystem activity
- Registry activity
- operations you do not yet understand

Do not assume every event was directly requested by a line of source code.

### Questions to investigate

- Roughly how much activity occurs before your own useful work appears to happen?
- Which activity looks like program-loader or runtime setup?
- Which events can you confidently connect to something in your source?
- Which events cannot yet be attributed confidently?
- What evidence would distinguish "my code did this" from "the runtime/loader/OS did this on behalf of starting my program"?

Choose at least one event that initially surprised you and investigate it far enough to give an evidence-backed explanation or explicitly record what remains unknown.

---

## Part 3 — Static Dependencies vs Runtime Reality

Use a static binary-inspection tool to inspect the executable's declared dependencies.

Then compare that evidence with the image/DLL activity observed while the process ran.

You already know DUMPBIN. Find the option that is relevant rather than asking for the command first.

### Questions to investigate

- Which DLL dependencies are visible statically in the executable?
- Which modules are actually observed at runtime?
- Are the two lists identical?
- If not, what hypotheses could explain the difference?
- Can a DLL loaded by one DLL cause additional modules to appear even if your executable did not name them directly?

At this point, if DLL lookup behavior becomes relevant to your explanation, read:

**Microsoft — Dynamic-link library search order**  
https://learn.microsoft.com/en-us/windows/win32/dlls/dynamic-link-library-search-order

Do not memorize the full search order. Understand that module resolution is a runtime operation with rules and security consequences.

---

## Part 4 — Change the Launch Context

Run the *same executable* from at least two meaningfully different launch contexts.

Examples include:

- Rider terminal / PowerShell
- `cmd.exe`
- File Explorer
- another launcher you can justify

Do not change the executable between these runs.

Compare the resulting evidence.

### Questions to investigate

- What changed about the parent process?
- What stayed the same?
- Did the command line or working directory change?
- Did any filesystem or DLL-resolution behavior change?
- Which properties belong to the executable itself, and which belong to a particular process instance or launch context?

This is a differential experiment: change one important condition and observe what follows.

---

## Part 5 — Create a Controlled OS-Side Effect

Modify the program so that it deliberately performs at least one small filesystem operation that Process Monitor should be able to observe.

Choose the operation yourself.

Requirements:

- keep the program small
- make the new behavior intentional and easy to reproduce
- predict what new evidence you expect before running it
- rebuild normally
- capture another clean trace
- identify the new activity attributable to your change

### Questions to investigate

- What events appeared that were absent from the baseline?
- Can you correlate them to the source change?
- Did one source-level operation produce one OS event, or several?
- Were there any events you predicted that did not occur?
- What does that tell you about the abstraction between C++ library calls and OS operations?

Your explanation should use a before/after comparison, not memory.

---

## Part 6 — Snapshot vs History

A fast process can disappear before a live inspection tool becomes useful.

Adjust your test program, if necessary, so you can keep one process instance alive long enough to inspect it. Choose the mechanism yourself.

Use Process Explorer to inspect the live process.

**Microsoft Sysinternals — Process Explorer**  
https://learn.microsoft.com/en-us/sysinternals/downloads/process-explorer

Look for information that complements rather than duplicates your Process Monitor trace.

### Questions to investigate

- Which loaded modules can you see while the process is alive?
- How many threads exist at the moment you inspect it?
- What handles or other resources are visible?
- What can Process Explorer tell you that Process Monitor's event history cannot?
- What can Process Monitor tell you that a live Process Explorer snapshot cannot?

The goal is to start distinguishing **state** from **events over time**.

---

## Part 7 — Observability Has Boundaries

Find at least one thing your program does that you know occurred but that your Process Monitor trace does not directly show in the form you expected.

Do not treat this as a tool failure.

### Explain

- what you expected to see
- why you believe the behavior occurred
- whether Process Monitor is designed to expose that layer
- what different tool or representation might answer the question

This is important:

> An observation tool is evidence only for what it can actually observe.

Absence from one trace is not automatically proof that an operation did not happen.

---

## Part 8 — Security Lens: Why Module Resolution Matters

Only after you have observed real module loading, consider the trust boundary.

Read:

**Microsoft — Dynamic-Link Library Security**  
https://learn.microsoft.com/en-us/windows/win32/dlls/dynamic-link-library-security

Do **not** build or execute a DLL-hijacking demonstration for this challenge.

### Questions to investigate

- Why can DLL search order become a security issue?
- What would an attacker need to control for search-path manipulation to matter?
- Why is an unqualified DLL name potentially different from a fully qualified path?
- Which parts of your own tiny executable's module-loading behavior are inherited from the runtime/toolchain rather than explicitly written by you?

The purpose is threat-model exposure, not exploitation.

---

## Verification Plan

Your evidence should allow another engineer to distinguish at least these things:

1. the executable file on disk
2. one particular running process created from that executable
3. the process that launched it
4. startup/runtime/loader activity surrounding your own code
5. statically declared dependencies versus modules observed at runtime
6. a baseline run versus a deliberately modified run
7. live process state versus historical event traces
8. an event not observed because the chosen tool does not expose that layer

Do not accept "ProcMon showed a bunch of stuff" as completion.

The challenge is complete when you can tell a coherent story of one process lifetime and point to evidence for each important claim.

---

## Evidence to Collect

Keep the useful raw evidence from the investigation:

- the original Challenge 01 executable or a reproducible build of it
- baseline Process Monitor capture / export
- modified-program Process Monitor capture / export
- notes on filters used and why
- process identity and parentage evidence
- static dependency output from DUMPBIN
- runtime module evidence
- Process Explorer snapshot / notes
- before/after comparison for the controlled filesystem operation
- one example of an observability boundary
- short written conclusions and remaining unknowns

Do not preserve giant unfiltered traces just for volume. Preserve the evidence that supports your reasoning.

---

## Check-Off Questions

When you believe the challenge is complete, be ready to explain without hiding behind tool names:

- What is the difference between `main.exe` and a running `main.exe` process?
- What created the process you observed?
- What evidence proves the parent/child relationship?
- Why did such a tiny program generate more OS activity than its source code suggests?
- Which module loads could you predict statically, and which required runtime observation?
- What changed when you changed the launch context?
- What changed when you deliberately added filesystem behavior?
- What did Process Monitor fail to tell you, and why?
- When would you use Process Monitor versus Process Explorer?
- What security assumption exists when Windows searches for a DLL by name?

---

## Leverage Question

After finishing, ask:

> Is there any part of this investigation that I repeatedly perform in real engineering work and would benefit from a reusable capture/filter workflow?

The answer may be no.

Do not build a permanent tool merely because the curriculum has a toolsmithing goal. First establish repeated friction.

---

## Completion Standard

This challenge is not about memorizing Windows internals.

It is about making the transition from:

```text
"I ran my program"
```

to:

```text
"A parent created this process instance; Windows established its runtime environment; these modules and resources appeared; these events correspond to my controlled behavior; this tool cannot observe this other layer; here is the evidence."
```

That runtime model will become the foundation for later work with process inspection, debugging, security, networking, performance, and operating-system internals.
