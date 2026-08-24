# Long-Term Curriculum Execution Plan

## Purpose

The Curriculum Map lists what must be learned. This document describes how the pieces should compound over years.

This is not a rigid five-year schedule. Progress depends on prior experience, professional incidents, difficulty, curiosity, and the evolution of computing itself.

The curriculum advances through **capability phases**, not calendar semesters.

## Constant Threads

Every phase contains all of these threads at increasing depth:

1. programming language mastery and tool selection
2. computer science and mathematical foundations
3. systems and hardware understanding
4. security and adversarial reasoning
5. testing, measurement, profiling, and instrumentation
6. toolsmithing and environment engineering
7. technical literacy across raw representations
8. AI used only within the current delegation policy
9. living-edge review and adaptation

No thread is "finished." Mature capabilities are revisited under harder constraints.

# Phase 1 — Make the Machine Visible

### Goal

Stop treating ordinary development actions as black boxes.

### Core areas

- compiler, linker, object files, symbols
- processes and OS observation
- filesystem and integrity
- sockets and packets
- elementary cryptography and trust
- shell / command-line fluency
- Git internals and build hygiene
- first automated tests and measurement habits

### Programming emphasis

C++ remains the primary implementation language because it connects directly to the student's professional base and exposes native systems behavior.

Begin strengthening PowerShell and shell fluency through real workflow tasks.

### Security emphasis

Integrity, process visibility, network observation, trust boundaries, least privilege.

### Evidence emphasis

Reproduction, raw tool output, symbol tables, packet captures, simple automated tests, baselines.

### Toolsmithing outcome

Several small utilities may appear. Only genuinely useful ones survive.

# Phase 2 — Control Memory, Execution, and Data

### Goal

Understand what software is actually doing at runtime and begin reasoning rigorously about efficiency and correctness.

### Core areas

- C and assembly literacy
- memory layout, stack, heap, allocators
- virtual memory
- data structures and algorithmic complexity
- CPU caches and memory hierarchy
- debugging and crash analysis
- threads, locks, races, deadlocks
- structured data, serialization, SQL, indexes
- automated testing beyond unit happy paths

### Programming emphasis

Deepen modern C++.

Introduce Python as a serious automation/investigation language rather than merely syntax.

Begin Rust fundamentals after manual ownership/lifetime concepts are sufficiently strong to compare models meaningfully.

### Security emphasis

Memory safety, unsafe inputs, privilege boundaries, common vulnerability classes, secure coding.

### Evidence emphasis

Profilers, allocation traces, thread timelines, fuzzing/property testing, benchmark design, statistical noise.

# Phase 3 — Operating Systems, Binaries, and Defensive Visibility

### Goal

Become comfortable descending below ordinary application abstractions and building useful host-level visibility.

### Core areas

- operating-system internals
- syscalls, scheduling, synchronization
- executable formats and loaders
- dynamic linking and ABI
- debugging at assembly level
- tracing facilities
- services, permissions, persistence mechanisms
- reverse-engineering foundations
- event collection and correlation
- secure remote administration

### Programming emphasis

C++ and Rust both become serious systems choices.

Python / PowerShell are used to orchestrate experiments and build diagnostic layers.

### Security emphasis

Host hardening, persistence, malware-analysis concepts, forensics, detection engineering, authentication and authorization.

### Evidence emphasis

Event traces, process ancestry, module/signature/provenance data, forensic snapshots, controlled fault injection.

# Phase 4 — Performance, Parallelism, Networks, and Distributed Systems

### Goal

Reason correctly about systems whose behavior emerges from concurrency, hardware, and multiple machines.

### Core areas

- memory models and atomics
- task systems and lock-free concepts
- cache coherence and NUMA
- SIMD and vectorization
- CPU/GPU/accelerator models
- networking depth and protocol behavior
- distributed clocks and partial failure
- replication and consistency
- queues, coordination, service architecture
- observability across machines
- performance engineering under realistic workloads

### Programming emphasis

Language selection becomes part of architecture.

Exercises should force comparison among C++, Rust, Python, SQL, PowerShell, and existing tools based on evidence.

### Security emphasis

Distributed trust, service identity, network defense, supply chain, secrets, secure orchestration.

### Evidence emphasis

Hardware counters, flame graphs, contention traces, throughput/tail latency, chaos/fault injection, multi-machine telemetry.

# Phase 5 — Compilers, Runtime Systems, Advanced Security, and Technical Invention

### Goal

Move from consuming sophisticated systems to modifying and inventing them.

### Core areas

- parsers, ASTs, IR, code generation
- compiler optimization
- runtime and VM design
- program analysis
- advanced binary analysis
- exploit-mitigation internals
- advanced cryptography concepts
- sandboxing and isolation
- specialized diagnostics and observability systems
- architecture of large developer platforms

### Security emphasis

Advanced defensive research, attack-surface analysis, exploit classes in authorized labs, detection bypass concepts for defensive understanding, security harness design.

### Evidence emphasis

Formalized invariants where appropriate, differential testing, fuzzing at scale, performance regression systems, security evaluation methodology.

# Phase 6 — Independent Powerhouse Engineering

This phase has no fixed syllabus.

The student should increasingly identify worthwhile problems independently.

Assignments become prompts such as:

> A class of failures in your environment is difficult to explain after the fact. Improve your ability to know what happened.

or:

> You do not trust that two supposedly identical machines are actually equivalent. Establish the truth and make the answer cheap to obtain next time.

or:

> A new technology claims to replace a technique you understand well. Determine whether the claim deserves adoption.

The student chooses the architecture, language, evidence strategy, and interface.

## Recurring Synthesis Gates

Approximately every 8–12 challenges:

- combine multiple earlier capabilities
- revisit a retained tool
- introduce a new constraint
- require evidence of correctness and cost
- allow greater design freedom

## Professional Incident Override

A real incident may replace the planned challenge when it offers meaningful learning.

Do not merely fix it.

Use the incident to ask:

- what layer actually failed?
- what evidence proves the cause?
- what instrumentation was missing?
- what would have detected this earlier?
- can any useful capability be retained?

## Annual Recalibration

The phases are stable; technologies are not.

Each year, revise the implementation details of the curriculum based on the State of Computing and Security review.

The target is not mastery of computing as it existed in 2026.

The target is the ability to remain formidable as computing changes.
