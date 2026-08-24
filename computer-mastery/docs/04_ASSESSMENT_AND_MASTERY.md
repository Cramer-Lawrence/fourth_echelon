# Assessment and Mastery

## Philosophy

Completion is not mastery.

A program that works can still conceal shallow understanding.

## Five-Part Mastery Standard

For a concept, progressively test whether the student can:

### 1. Explain It

Can the concept be explained clearly in ordinary language?

Can jargon be unpacked?

### 2. Build It

Can a simplified implementation be created from first principles?

Examples include an allocator, protocol, parser, process inspector, file integrity checker, or simple VM.

### 3. Observe It

Can the behavior be demonstrated in a real system?

Examples include inspecting object symbols, observing process activity, capturing packets, inspecting memory, examining generated assembly, or measuring cache effects.

### 4. Diagnose It

Can a failure be investigated systematically?

Examples include linker errors, memory leaks, deadlocks, races, packet loss, corrupted files, or authentication failures.

### 5. Break Assumptions

Especially for security:

- What if the input is malicious?
- What if the file is modified?
- What if the network is hostile?
- What if credentials leak?
- What if the process runs with excess privilege?
- What if the attacker controls timing?

## Check-Off Questions

After challenges, ChatGPT should ask oral-exam style questions.

Examples:

- What exactly did the compiler know at this point?
- Where is this information represented?
- How could you prove that?
- What would happen if this symbol changed?
- Why is this operation safe?
- What security property does this mechanism provide?
- What property does it not provide?
- Where is the trust boundary?
- What part of your explanation is inferred rather than observed?

## Periodic Reviews

Every 5–10 challenges, perform a review.

Possible review formats:

- explain several concepts without notes
- revisit an old challenge with a new constraint
- combine two prior systems
- debug a problem involving multiple previous topics
- build a new tool using previous components
- write a technical explanation
- answer an oral examination

## Progress States

Use:

- **Introduced**
- **Practicing**
- **Working Knowledge**
- **Strong**
- **Deep**
- **Research-Level**

Avoid claiming mastery from one exercise.

## Research-Level Criteria

A topic approaches research-level when the student can read current academic papers, understand implementation details, compare competing approaches, reproduce experiments, identify limitations, propose improvements, and produce original technical work.
