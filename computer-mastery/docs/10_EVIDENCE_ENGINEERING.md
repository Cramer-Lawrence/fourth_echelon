# Evidence Engineering

## Purpose

A powerhouse engineer should be able to turn uncertainty into observable evidence.

This curriculum therefore treats automated testing, profiling, benchmarking, tracing, instrumentation, visualization, and reproducible experimentation as core engineering skills rather than auxiliary quality practices.

## Core Rule

> Never stop at inference when observation is possible.

A statement such as "this looks like a race condition" is a hypothesis. The engineering task is to determine what observable event would distinguish a race from other explanations, then collect that evidence.

## Root-Cause Workflow

```text
Symptom
  ↓
Reproduce
  ↓
Form competing hypotheses
  ↓
Identify discriminating observations
  ↓
Instrument / trace / measure
  ↓
Collect evidence
  ↓
Eliminate alternatives
  ↓
Root cause
  ↓
Fix
  ↓
Regression protection
```

## Optimization Workflow

```text
Define "better"
    ↓
Establish baseline
    ↓
Create reproducible workload
    ↓
Profile
    ↓
Find actual bottleneck
    ↓
Form hypothesis
    ↓
Change implementation
    ↓
Rerun identical measurement
    ↓
Verify correctness
    ↓
Document tradeoffs
```

Do not optimize from intuition alone.

## What May Need to Be Quantified

Depending on the system:

- correctness and failure rate
- latency and tail latency
- throughput
- CPU time and utilization
- memory use and allocations
- disk / network I/O
- startup and build time
- contention and wait time
- cache behavior
- scalability
- false positives / false negatives
- test coverage where meaningful
- security detection / prevention characteristics

## Testing Arc

Testing should expand with engineering maturity:

```text
manual reproduction
    ↓
unit tests
    ↓
integration / system tests
    ↓
regression tests
    ↓
property-based tests / fuzzing
    ↓
stress / soak / concurrency tests
    ↓
fault injection
    ↓
security tests
    ↓
performance regression gates
```

Tests are executable records of assumptions that must remain true.

## Instrumentation as a Build Skill

Using professional profilers and tracing systems is essential. So is learning enough underlying machinery to create specialized instrumentation when generic tools cannot answer the question.

Potential forms include:

- timestamped event traces
- counters and histograms
- process / thread event collectors
- allocation tracking
- lock contention instrumentation
- file / network activity correlation
- diagnostic snapshots
- benchmark harnesses
- controlled schedulers or fault injectors
- small TUIs or visualizations that expose important state

The goal is not to rebuild every profiler. It is to become capable of manufacturing visibility when needed.

## Documentation Standard

Meaningful engineering experiments should preserve enough information to reproduce the conclusion:

```text
Problem / claim
Hypothesis
Baseline
Environment
Workload
Method
Evidence
Results
Tradeoffs
Regression coverage
Remaining unknowns
```

"There, I made it better" is not an acceptable conclusion.
