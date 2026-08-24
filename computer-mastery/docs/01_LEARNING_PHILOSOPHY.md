# Learning Philosophy

## 1. On-the-Job Learning First

The default teaching style is simulated professional work.

Assignments should resemble engineering tickets, internal tooling requests, incident reports, production bugs, research tasks, platform investigations, security assessments, architecture decisions, and environment improvements.

The problem should often appear before the formal lesson.

Real work rarely says:

> Today you will practice virtual memory.

It says:

> This process grows to 11 GB overnight. Determine why.

The required theory should emerge from the investigation.

## 2. ChatGPT Does Not Write the Student's Code

The student writes all implementation code.

ChatGPT's role is research assistant, tutor, rubber duck, reviewer, interviewer, and source curator.

ChatGPT may find authoritative learning resources, identify relevant chapters or sections, explain concepts, ask questions, review user-written code, challenge assumptions, point toward tools, suggest experiments, help diagnose reasoning, and provide progressively stronger hints.

ChatGPT should not solve the exercise by writing the implementation, dump a complete solution while the student is still investigating, or remove the difficult reasoning from the assignment.

If the student explicitly asks for the answer, that changes the interaction.

## 3. Evidence Over Guessing

Prefer observations over assumptions.

Examples:

- inspect symbols instead of guessing what the linker saw
- capture packets instead of guessing what crossed the network
- inspect memory instead of assuming where data lives
- profile code instead of assuming why it is slow
- inspect process activity instead of assuming what Windows did
- compare machine state instead of assuming two environments are identical

A strong explanation should answer:

> How do you know?

## 4. Use → Understand → Build → Leverage

A recurring pattern:

1. use an existing professional tool
2. understand what it is showing
3. learn the underlying system or API
4. build a primitive version yourself when useful
5. turn the knowledge into reusable leverage

Examples:

- Process Explorer → Windows process APIs → process inspector → persistent process telemetry
- Wireshark → TCP/IP → network utility → process/network correlation
- DUMPBIN → object formats and symbols → binary inspector → build failure analysis
- Git tooling → hooks and automation → custom workflow tools → reproducible environment setup

Not every topic must reach step 5 immediately. The curriculum should revisit earlier material when new knowledge makes stronger leverage possible.

## 5. Build Things Worth Keeping

Avoid disposable tutorial code when a useful tool can teach the same concept.

Potential examples include file inventory utilities, integrity checkers, process inspectors, log analyzers, SDK/environment validators, asset validators, binary inspectors, network diagnostic tools, build helpers, dependency visualizers, profiling utilities, machine-comparison tools, and defensive monitors.

A challenge project may begin crude. If it proves useful, later challenges may extend, redesign, combine, or integrate it.

## 6. Do Not Rebuild Everything

Custom tooling is not an excuse to reject mature software.

The student should learn to distinguish between:

- software that is already an excellent primitive
- software that is worth reimplementing for educational reasons
- workflow layers that are worth customizing
- repeated friction that deserves automation
- missing visibility that deserves instrumentation

The goal is leverage, not needless reinvention.

## 7. Tool Choice Is Part of the Assignment

Do not always prescribe the language.

The student should learn when to reach for C++, Python, PowerShell, Bash, SQL, JavaScript/TypeScript, an existing CLI utility, or a pipeline of existing tools.

Sometimes the best engineering solution is a program. Sometimes it is a five-line shell command. Sometimes it is configuration. Sometimes it is an existing tool composed with others.

## 8. Cross-Link Everything

Topics should not be isolated.

```text
C++ → Compiler → Object Files → Symbols → Executable
→ Process → Memory → OS → Architecture → Security
```

```text
Process → Socket → TCP/IP → Packets → TLS → Network Security
```

```text
File Integrity → Hashing → Authentication → Signatures → Key Management
```

```text
Build Failure → Environment → Process Tree → Filesystem → Logs
→ Machine Comparison → Automation → Remote Diagnostics
```

The curriculum should revisit prior concepts in new contexts.

## 9. Theory Should Gain Teeth

Algorithms, data structures, mathematics, databases, concurrency, and architecture must not become optional just because systems work is more immediately exciting.

Whenever possible, theory should arrive through real pressure from the work.

Examples:

- telemetry volume creates a need for indexing and complexity analysis
- dependency relationships create a need for graphs
- concurrent collectors create a need for synchronization and memory-order reasoning
- anomaly detection creates a need for probability and statistics
- persistent event history creates a need for database design

Some topics still require focused study. Do not force every academic idea into an artificial project.

## 10. Inventive Pressure Must Increase Over Time

Early challenges may specify the outcome clearly.

Later challenges should increasingly require the student to choose the tools, architecture, evidence, and eventually the problem definition itself.

The progression should move roughly from:

```text
Follow specifications
        ↓
Choose implementation
        ↓
Choose architecture
        ↓
Choose tooling
        ↓
Define the problem
        ↓
Invent the solution
```

The ability to notice that a tool should exist is itself part of mastery.

## 11. Real Incidents May Interrupt the Sequence

A real engineering problem is often better curriculum than the planned challenge.

When an authentic build failure, SDK mismatch, networking issue, performance problem, or other relevant incident occurs, it may temporarily replace the scheduled exercise.

Do not stop at the practical fix. Ask what deeper system behavior caused it, how it can be proved, what could have detected it earlier, and whether reusable tooling should result.

## 12. Never Stop at Inference When Observation Is Possible

A hypothesis is the start of an investigation, not the conclusion.

If a problem looks like a race condition, memory leak, network loss, build-environment mismatch, cache problem, or security event, the curriculum should push toward an observation that can distinguish that explanation from alternatives.

The recurring workflow is:

```text
Hypothesis → Instrumentation → Evidence → Conclusion
```

When existing tools cannot expose the needed evidence, building a probe, tracer, harness, collector, visualizer, or controlled experiment is part of the engineering work.

## 13. Improvement Requires Measurement

Do not accept claims such as faster, safer, more reliable, cleaner, or better merely because an implementation is theoretically attractive.

Before meaningful optimization or redesign:

1. define the property being improved
2. establish a reproducible baseline
3. measure the existing system
4. profile or instrument to identify the actual constraint
5. make the change
6. repeat the same measurement
7. run correctness and regression tests
8. document tradeoffs and remaining uncertainty

A change that improves throughput while destroying memory use, tail latency, correctness, debuggability, or security is not automatically an improvement.

## 14. Automated Tests Are Long-Term Memory

Testing is not an isolated unit-testing module. It should grow with the systems being built.

The curriculum should eventually include unit, integration, system, regression, property-based, fuzz, stress, soak, concurrency, fault-injection, security, compatibility, and performance-regression testing.

Tests preserve knowledge about what must remain true after the original engineer has forgotten the details.

## 15. AI Multiplies Competence; It Does Not Replace It

During foundational learning, AI must not implement the subsystem being learned. The student writes the code. AI may teach, review, challenge reasoning, curate sources, suggest experiments, critique test methodology, and help interpret evidence.

As competence grows, AI may selectively generate bounded implementation where the student can fully evaluate the result.

Core rules:

> Never delegate beyond your ability to evaluate.

> If the exercise exists to teach how something works, AI does not implement that thing for the student.

> AI output is untrusted until validated.

The long-term goal is human technical ownership with AI as a combat multiplier. If AI fails, the human must be capable of taking control.

At advanced stages, deliberately flawed AI-generated systems may be used as fault-injection exercises. The student must discover what is wrong through evidence rather than being told the defect.

## 16. Keep a Living Edge

Fundamentals are durable; computing practice is not static.

The curriculum should continuously recalibrate against important changes in hardware, AI-assisted engineering, operating systems, concurrency, compilers, runtimes, security, observability, distributed systems, cryptography, and infrastructure.

New technology should be investigated rather than worshipped. The standard is:

> Does this change what a top-tier computing engineer should understand or be able to do?

When the answer may be yes, read primary sources, build a small experiment when appropriate, measure it, compare it to current approaches, and decide whether to adopt, monitor, or ignore it.
