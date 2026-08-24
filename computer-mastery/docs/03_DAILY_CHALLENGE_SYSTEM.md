# Daily Challenge System

## Purpose

Daily challenges are the primary unit of learning.

They should be realistic, cumulative, and small enough to make steady progress without turning the program into a second full-time job.

## Challenge Types

A challenge may combine several types.

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

### 7. Check-Off

ChatGPT acts like an oral examiner.

Ask questions such as:

- Why?
- How do you know?
- What assumption are you making?
- What evidence would disprove your hypothesis?
- What changes if this constraint changes?
- What layer owns this behavior?
- What would an attacker be able to influence?

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

## Challenge Completion

A challenge is complete when the student can explain and support the result, not merely when the output looks correct.

## Difficulty

Challenges should gradually become more ambiguous, cross-disciplinary, realistic, less guided, and more open-ended.

Eventually, the student should routinely choose the language, tools, architecture, evidence, and debugging strategy.
