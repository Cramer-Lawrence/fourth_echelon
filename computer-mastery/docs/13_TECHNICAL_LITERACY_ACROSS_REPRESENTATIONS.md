# Technical Literacy Across Representations

## Purpose

The computer should progressively become legible.

A mature computing engineer should be able to move between different representations of the same system and recognize that logs, symbols, packets, traces, source, assembly, and memory are not separate worlds. They are different views of one execution.

## Core Principle

> Raw evidence is not noise. It is the machine describing what happened.

The curriculum should deliberately expose the student to increasingly unsanitized technical evidence.

## Representation Ladder

Develop fluency across:

```text
requirements / behavior
        ↕
source code
        ↕
compiler diagnostics
        ↕
preprocessed source
        ↕
object files / symbols
        ↕
assembly / machine code
        ↕
registers / stack / memory
        ↕
runtime events / threads / processes
        ↕
system calls / OS state
        ↕
filesystem / device I/O
        ↕
sockets / packets / protocol state
        ↕
logs / traces / metrics
        ↕
hardware counters / CPU behavior
```

Security observations may cross every layer.

## Desired Pattern Recognition

Over time, repeated exposure should produce recognition such as:

- seeing a linker error as a symbol-resolution problem rather than "the build broke"
- seeing an access violation near a small address and considering a null base plus field offset
- seeing steady allocation growth and distinguishing a leak hypothesis from evidence
- seeing a thread timeline and spotting unexpected overlap or contention
- seeing repeated network activity and asking which process, parent, destination, and trust boundary are involved
- seeing assembly and identifying the source-level operation, calling convention, or optimization responsible
- seeing a build log and reconstructing the actual chain of tools and environment decisions

These are examples, not facts to memorize.

## Curriculum Rule

Do not always translate raw evidence for the student immediately.

At appropriate difficulty levels, present:

- the real log
- the raw symbol table
- debugger output
- packet captures
- profiler traces
- stack traces
- disassembly
- event streams
- benchmark data

Then ask:

> What do you see?

The ability to extract signal should itself be trained and assessed.

## Evidence Translation Exercise

A recurring advanced exercise should ask the student to explain one event across several layers.

For example:

```text
source-level operation
→ generated symbol
→ instruction sequence
→ runtime event
→ OS interaction
→ trace/log evidence
```

The goal is not exhaustive tracing for every program. It is the ability to descend when necessary.

## End State

Broad enough to choose the right layer.

Deep enough to descend into that layer.

Skilled enough to build there.

Scientific enough to prove what happened.

Security-minded enough to distrust assumptions.

Creative enough to combine the evidence into an answer others did not see.
