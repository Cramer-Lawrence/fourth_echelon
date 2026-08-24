# Assessment and Mastery

## Philosophy

Completion is not mastery.

A program that works can still conceal shallow understanding.

Mastery should be judged both by conceptual understanding and by the ability to turn that understanding into useful engineering capability.

## Eight-Part Mastery Standard

For a concept, progressively test whether the student can:

### 1. Explain It

Can the concept be explained clearly in ordinary language?

Can jargon be unpacked?

### 2. Build It

Can a simplified implementation be created from first principles?

Examples include an allocator, protocol, parser, process inspector, file integrity checker, or simple VM.

Building is not always necessary for mature production technology, but implementing a primitive version can expose hidden assumptions.

### 3. Observe It

Can the behavior be demonstrated in a real system?

Examples include inspecting object symbols, observing process activity, capturing packets, inspecting memory, examining generated assembly, or measuring cache effects.

### 4. Test It

Can define what must remain true, automate meaningful checks, reproduce failures, and prevent known regressions.

### 5. Measure It

Can establish baselines, profile behavior, benchmark changes, quantify tradeoffs, and design instrumentation when existing tools cannot answer the question.

### 6. Diagnose It

Can a failure be investigated systematically?

Examples include linker errors, memory leaks, deadlocks, races, packet loss, corrupted files, authentication failures, environment drift, or dependency mismatches.

### 7. Break Assumptions

Especially for security:

- What if the input is malicious?
- What if the file is modified?
- What if the network is hostile?
- What if credentials leak?
- What if the process runs with excess privilege?
- What if the attacker controls timing?
- What if the machine is not configured the way you assumed?

### 8. Leverage It

Can the concept be turned into durable engineering leverage?

Possible evidence includes:

- automating a repeated task
- composing it with another capability
- creating reusable diagnostics
- integrating it into the personal environment
- making the capability remote
- adding history or observability
- using it to prevent a class of failures
- creating a tool that the student actually keeps using

Not every concept needs immediate leverage. This step is often tested later through synthesis challenges.

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
- What would make this fail on another machine?
- What part of this work is worth preserving or automating?
- What new capability does this give you?

## Capability Assessment

Track more than topic knowledge.

Periodically ask whether the student can now perform concrete tasks that were previously out of reach.

Examples:

- prove why a linker failed from object-file evidence
- determine which process created a transient child process
- compare important state across two machines
- trace a network conversation from application to packets
- verify whether important files changed
- determine why a development environment drifted
- collect enough evidence to reconstruct a failure after it occurs

## Periodic Reviews

Every 5–10 challenges, perform a review.

Possible review formats:

- explain several concepts without notes
- revisit an old challenge with a new constraint
- combine two prior systems
- debug a problem involving multiple previous topics
- build a new tool using previous components
- extend a tool that has already become useful
- write a technical explanation
- answer an oral examination
- solve an intentionally underspecified scenario

## Invention Assessment

As the curriculum advances, evaluate whether the student is becoming better at defining problems rather than only solving them.

Strong signals include:

- noticing repeated friction without being prompted
- deciding that missing visibility deserves instrumentation
- choosing useful measurements before knowing the root cause
- composing existing tools in an unexpected way
- creating a capability without being told what implementation should exist
- rejecting unnecessary reinvention when an existing primitive is better

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

## Evidence Standard

Engineering claims should carry evidence proportional to their importance.

Examples:

- "This is the root cause" → observation that rules in the cause and meaningfully rules out alternatives
- "This is faster" → controlled benchmark against a recorded baseline
- "This is more reliable" → automated tests, stress/soak evidence, or failure-rate data
- "This is safer" → threat model, security tests, attack-surface reasoning, and observable controls
- "This scales better" → measured behavior across increasing load rather than asymptotic theory alone

Theory can motivate a hypothesis. Measurement establishes what happened in the tested system.

## AI Competence Standard

AI use should be evaluated by whether it increases reach without destroying understanding.

Advanced competence includes being able to specify constraints, evaluate AI-produced implementation, prove correctness and performance claims, detect plausible but false explanations, and take over manually when AI fails.


## Language and Tool Judgment Standard

Programming mastery includes choosing an implementation approach from constraints rather than preference. Periodically require the student to justify why C++, Rust, Python, PowerShell, SQL, TypeScript/JavaScript, a shell pipeline, or an existing tool is appropriate.

Strong evidence includes measured comparative implementations, knowledge of runtime and deployment costs, and the ability to reject an unnecessary custom implementation.

## Cross-Representation Literacy Standard

The student should progressively be able to extract meaning from increasingly raw evidence without immediate translation from ChatGPT.

Assessment artifacts may include compiler/linker diagnostics, symbol tables, disassembly, stack/register state, crash dumps, process/thread traces, packet captures, profiler timelines, logs, metrics, and hardware counters.

The goal is not memorization of formats. It is the ability to correlate representations and determine what the machine actually did.
