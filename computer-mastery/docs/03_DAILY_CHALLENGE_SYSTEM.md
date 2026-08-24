# Daily Challenge System

## Purpose

Daily challenges are the primary unit of learning.

They should be realistic, cumulative, and small enough to make steady progress without turning the program into a second full-time job.

The purpose is not merely to complete exercises. Each challenge should either deepen understanding, add a capability, strengthen an earlier capability, or expose a weakness worth revisiting.

## Challenge Modes

A challenge may combine several modes.

### Build

Create something useful.

Example:

> The team needs a utility that verifies developer machines have compatible SDK versions before a build starts.

### Investigate

Use real tools to determine how a system behaves.

Example:

> Observe what Windows actually does between launching an executable and reaching the visible work performed by the program.

### Debug

Find and prove the root cause of a failure.

Example:

> The compiler succeeds, but the linker fails. Determine what information is missing and prove it from the object files.

### Defend

Understand or reduce security risk.

Example:

> Determine whether a downloaded artifact has changed and design a way to verify integrity.

### Research

Read deeper material and form a technical conclusion.

Example:

> Compare two memory allocation strategies, reproduce their behavior, and explain the tradeoffs.

### Integrate / Extend

Return to something learned or built earlier and make it materially more useful.

Example:

> A process-inspection utility can answer what is running now, but short-lived processes disappear before they can be investigated. Improve the capability.

This mode prevents the curriculum from becoming a graveyard of one-off exercises.

## Challenge Mix

Do not force an exact quota, but keep the curriculum balanced.

A useful long-term bias is:

- Build: frequent
- Investigate: frequent
- Debug: regular, but not dominant
- Defend: regular and integrated
- Research: recurring when deeper theory is needed
- Integrate / Extend: recurring so useful work compounds

Build-oriented work should remain the largest single category.

## Default Daily Structure

### 1. Scenario

A realistic request, incident, or engineering need.

Avoid announcing the lesson when doing so would spoil the investigation.

### 2. Constraints

Define what is known and what is required.

Allow some ambiguity when realistic.

### 3. Reading / Resources

Prefer authoritative sources.

Use specific chapters or sections when possible.

### 4. Assignment

The student writes all code and performs all investigation.

### 5. Evidence

Require artifacts such as source code, command history, debugger output, packet captures, profiler screenshots, symbol tables, logs, measurements, and notes.

### 6. Explanation

The student explains what they believe happened and why.

### 7. Leverage Question

When appropriate, ask:

> Is there anything here worth automating, preserving, composing, or integrating into the student's real environment?

The answer may be no. Do not manufacture permanent tools from every exercise.

### 8. Check-Off

ChatGPT acts like an oral examiner.

Ask questions such as:

- Why?
- How do you know?
- What assumption are you making?
- What evidence would disprove your hypothesis?
- What changes if this constraint changes?
- What layer owns this behavior?
- What would an attacker be able to influence?
- What part of this could be made reusable?


## Evidence Requirement

When a challenge includes a claim about correctness, performance, reliability, security, or root cause, the challenge should define or require a way to test that claim.

Increasingly, completion should include:

- a reproducible workload or failure case
- an automated test or repeatable procedure
- a baseline when comparison is meaningful
- instrumentation or profiler output when behavior is not directly visible
- before/after measurements when claiming improvement
- documented tradeoffs and uncertainty

"It seems better" is not evidence.

## AI Use by Challenge Stage

Default early-stage rule: no AI-generated implementation code.

AI may assist with sources, explanations, questions, review, experiment design, and interpretation of student-produced evidence.

Later challenges may explicitly permit selective generation after the underlying capability has already been demonstrated manually.

Advanced challenges may deliberately contain AI-generated defects or misleading AI hypotheses. The student should not be told the failure mode in advance when discovery is the point of the exercise.

## Living-Edge Reviews

At least quarterly, include a short frontier review separate from ordinary challenge progression. Identify important developments in computing and security, investigate a small number deeply enough to separate signal from hype, and record adopt / monitor / ignore decisions.

## Hint Ladder

Do not reveal the answer too quickly.

Suggested progression:

1. ask a probing question
2. identify an unproven assumption
3. suggest an observation or experiment
4. point toward a concept
5. point toward a specific documentation section
6. provide a stronger hint
7. explain the answer only when requested or necessary

## Invention Ladder

Challenge specifications should become less complete as the student grows.

```text
Level 1: outcome and method are mostly specified
Level 2: outcome specified; implementation chosen by student
Level 3: scenario specified; architecture and tools chosen by student
Level 4: ambiguous operational problem; student defines success criteria
Level 5: student notices the problem and invents the capability independently
```

Do not rush to Level 5. The progression should happen naturally over years.

## Synthesis Challenges

Roughly every 8–12 challenges, consider a synthesis assignment.

A synthesis challenge should require several previous capabilities to interact and should provide less implementation guidance than normal.

Examples:

- combine two prior tools
- add persistent history to an observer
- compare two machines
- make a local tool operate remotely
- turn manual investigation steps into a repeatable workflow
- take an old tool and redesign it under new scale or security constraints

## Real Incident Override

A genuine engineering incident may replace the planned daily challenge when it is more educational.

The immediate production problem should still be solved, but the curriculum should then ask deeper questions:

- what actually happened?
- what evidence proves it?
- what assumption failed?
- what subsystem was responsible?
- could this have been detected automatically?
- should any reusable tool or check result?

## Challenge Completion

A challenge is complete when the student can explain and support the result, not merely when the output looks correct.

## Difficulty

Challenges should gradually become more ambiguous, cross-disciplinary, realistic, less guided, and more open-ended.

Eventually, the student should routinely choose the language, tools, architecture, evidence, debugging strategy, and sometimes the problem itself.

## Tool-Choice Progression

Early challenges may prescribe a language when the language itself is part of the lesson. As the student becomes stronger, implementation choice should increasingly become part of the exercise.

Ask what constraints justify C++, Rust, Python, PowerShell, SQL, TypeScript/JavaScript, shell composition, or an existing professional tool.

Do not reward unnecessary implementation complexity. Sometimes the most elite answer is the smallest composition of existing primitives.

## Raw-Evidence Progression

Do not permanently protect the student behind summaries and friendly dashboards. Increase exposure to real compiler output, linker diagnostics, symbols, assembly, memory state, traces, packets, logs, profiler timelines, and other raw evidence.

At appropriate stages, present the evidence first and ask:

> What do you see?

Technical pattern recognition is a trainable capability.
