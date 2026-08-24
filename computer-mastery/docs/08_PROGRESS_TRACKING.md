# Progress Tracking

## Purpose

Track the education seriously enough to see growth over years without turning the tracker into bureaucracy.

Track both knowledge and capability.

## Topic Status

Use:

- Introduced
- Practicing
- Working Knowledge
- Strong
- Deep
- Research-Level

## Suggested Topic Table

| Domain | Topic | Status | Evidence | Last Reviewed | Notes |
|---|---|---|---|---|---|
| Build Systems | Compilation vs Linking | Introduced | Challenge 01 | | |
| Binaries | Symbols | Introduced | Challenge 01 | | |
| OS | Processes | Not Started | | | |
| Memory | Virtual Memory | Not Started | | | |
| Networking | TCP/IP | Not Started | | | |
| Security | Threat Modeling | Not Started | | | |
| Crypto | Hashing | Not Started | | | |
| Tooling | Personal CLI / Environment | Not Started | | | |

## Capability Tracking

Maintain a lightweight record of things the student can now do reliably.

Examples:

| Capability | Level | Evidence | Last Exercised | Notes |
|---|---|---|---|---|
| Inspect object-file symbols | Emerging | Challenge 01 | | |
| Diagnose linker failures from evidence | Emerging | Challenge 01 | | |
| Observe process behavior | Not Started | | | |
| Compare machine environments | Not Started | | | |
| Trace network traffic | Not Started | | | |
| Verify file integrity | Not Started | | | |

Suggested capability levels:

- Emerging
- Usable
- Reliable
- Composable
- Deep

**Composable** means the capability can be reused naturally as part of larger tools or investigations.

## Challenge Log

For each challenge record:

- challenge number
- title
- mode(s)
- date started
- date completed
- concepts
- resources
- implementation location
- observations
- tests / reproduction procedure
- baseline and measurements when applicable
- profiler / trace / instrumentation evidence when applicable
- mistakes
- unanswered questions
- new capabilities
- follow-up ideas
- leverage opportunities

## Personal Tool / Environment Inventory

Track only tools that become genuinely useful beyond the original exercise.

For each retained tool or environment component, consider recording:

- name / purpose
- origin challenge
- current capabilities
- where it is used
- important limitations
- dependencies
- last meaningful extension
- future ideas

Do not promote every exercise into the permanent environment.

## Review Cadence

Every 5–10 challenges:

- revisit earlier concepts
- test recall without notes
- combine prior systems
- perform an oral check-off
- identify weak areas
- update topic statuses
- update capability statuses
- consider whether an old tool deserves extension

## Synthesis Review

Roughly every 8–12 challenges, ask whether a synthesis assignment would be useful.

A synthesis should combine multiple earlier capabilities and include more design freedom than a normal challenge.

## Quarterly Review

Every few months, ask:

- What can I do now that I could not do before?
- What have I automated that I used to do manually?
- Which tools have I built and kept?
- Which tool do I now genuinely depend on?
- What can I observe about my computer now that I could not observe three months ago?
- Which systems can I explain deeply?
- What failures can I now diagnose?
- What subsystem has become less mysterious?
- Where am I still relying on vague abstractions?
- What topics have I only read about but never observed?
- What existing tool or workflow frustrated me, and did I understand it well enough to improve the situation?
- What capability from one domain did I unexpectedly combine with another?
- What did I invent without being told what to build?
- What performance or correctness claim did I prove with measurement rather than intuition?
- What diagnostic instrumentation did I build or learn to use?
- What important industry/security development did I investigate this quarter?
- Did I adopt, monitor, or reject it, and why?
- Where did AI help without replacing understanding?
- Could I take over manually if the AI assistance failed?
- What should be revisited?
- What field is pulling my interest most strongly?

## Evidence Portfolio

Over time, retain source repositories, notes, writeups, command histories, packet captures, debugger traces, profiler results, experiments, benchmark results, diagrams, research summaries, contributed patches, and useful personal tools.

The repository should become evidence of the education, not merely a list of topics.

The strongest evidence is not volume. It is increasingly sophisticated work and increasingly independent reasoning.

## Measurement Record

For meaningful optimizations or competing designs, retain enough information to reproduce the comparison later:

- claim / hypothesis
- baseline
- workload and dataset
- machine / environment details that matter
- measurement method
- repeated results and variability
- profiler or trace evidence
- before / after comparison
- correctness checks
- tradeoffs
- conclusion and remaining uncertainty

## Frontier Log

Quarterly, record a small number of important developments in computing or security.

For each:

- what changed
- primary sources consulted
- why it may matter
- experiment or investigation performed, if appropriate
- evidence gathered
- adopt / monitor / ignore decision
- when it should be revisited

The purpose is continuous recalibration, not trend chasing.

## AI Delegation Log

Once AI-generated implementation becomes permitted, occasionally record:

- what was delegated
- why delegation was appropriate
- what invariants / constraints were supplied
- how the output was reviewed
- automated tests and measurements used to validate it
- whether the student could explain and manually repair the result

This is especially useful for detecting comprehension debt.

