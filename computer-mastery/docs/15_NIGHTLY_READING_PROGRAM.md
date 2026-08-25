# Nightly Reading Program

## Purpose

Spend roughly 15 minutes before bed reading serious technical material.

This is not the primary learning mechanism and it is not homework that must be "completed" every night. Challenges provide active learning. Nightly reading builds vocabulary, mental models, pattern recognition, and long-term breadth through steady exposure.

## Rules

1. Read for approximately 15 minutes. Stop even if the section is unfinished.
2. Do not turn bedtime reading into a coding session.
3. Do not take extensive notes. One sentence or one question is enough if something matters.
4. Prefer the assigned spine over random articles.
5. When the current challenge strongly overlaps a later reading topic, temporarily jump to the relevant section and then return.
6. Sunday may be used to reread confusing material or write a 2–3 sentence recall summary.
7. Reading is allowed to be difficult. Full understanding is not required on first exposure.

## Resource Standard

The core reading spine uses resources that are freely available and have openly licensed/source-available text or source repositories.

The library should be re-verified during annual curriculum resets.

## Core Open Library

### Introduction to Computer Systems — XJTU ICS (Optional Secondary)

https://xjtu-ics.github.io/textbook/

Useful open systems material, but **not part of the required English-first reading spine**. Use only when language/access is comfortable or when a translated/English section is clearly available. Do not make progress depend on this resource.

### Computer Organization — OpenALG / University System of Georgia

https://alg.manifoldapp.org/projects/computer-organization

Open CC BY 4.0 textbook covering digital logic, binary representation, CPU organization, instruction sets, assembly, pipelining, memory, and virtual memory.

### Open Data Structures

https://opendatastructures.org/

Free/open textbook with pseudocode, Python, Java, and C++ editions. Text and source are CC BY.

### Mathematics for Computer Science — MIT OpenCourseWare

https://ocw.mit.edu/courses/6-1200j-mathematics-for-computer-science-spring-2024/pages/readings/

Open textbook/course material for proofs, sets, graphs, asymptotics, number theory, counting, and probability. Textbook is CC BY-SA.

### xv6: a simple, Unix-like teaching operating system

https://github.com/mit-pdos/xv6-riscv-book

Open MIT-licensed book source explaining a small RISC-V operating system. Pair later with the open xv6 source.

### Computer Networking: Principles, Protocols and Practice

https://beta.computer-networking.info/

Open networking textbook with source at https://github.com/cnp3/ebook and Creative Commons licensing.

### Performance Analysis and Tuning on Modern CPUs

https://github.com/dendibakh/perf-book

Open CC0 performance-engineering book covering modern CPUs, profiling, bottlenecks, caches, branch behavior, memory, and optimization methodology.

### The Rust Programming Language

https://doc.rust-lang.org/stable/book/

Official free Rust book; source at https://github.com/rust-lang/book under MIT/Apache-2.0.

### C++ Core Guidelines

https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

Living open guidelines for modern C++ interfaces, resource management, classes, concurrency, error handling, performance, and design.

### Python Documentation / Tutorial

https://docs.python.org/3/tutorial/

Official Python documentation. Source is maintained in the open CPython repository under the PSF license.

### PowerShell Documentation

https://learn.microsoft.com/powershell/

Official documentation; source at https://github.com/MicrosoftDocs/PowerShell-Docs under Creative Commons for documentation and MIT for repository code.

### The Missing Semester of Your CS Education

https://missing.csail.mit.edu/

Open CC BY-NC-SA course on shells, command-line tools, Git, debugging/profiling, metaprogramming, security, and computing environment fluency.

### Pro Git

https://git-scm.com/book/en/v2

Open-source book under Creative Commons licensing. Useful not just for Git commands, but for understanding objects, references, branching, protocols, hooks, and internals.

### Linux Kernel Documentation

https://docs.kernel.org/

Documentation shipped with the open-source Linux kernel. Later reading source for locking, tracing, testing, fault injection, build systems, APIs, and architecture internals.

### OWASP Cheat Sheet Series

https://cheatsheetseries.owasp.org/

Open CC BY-SA security guidance maintained in https://github.com/OWASP/CheatSheetSeries.

### OpenSSF Developing Secure Software

https://github.com/ossf/secure-sw-dev-fundamentals

Open CC BY course material on secure software development and software-supply-chain practices.

## Year-One Reading Spine

Read the indicated material for ~15 minutes each night. The week numbers are sequencing aids, not deadlines.

### Weeks 1–6 — How Programs Become Machine Activity

**Primary, English-first:** Microsoft Learn + Sysinternals documentation selected to match the active challenge.

For the compilation/linking opening, prioritize the official MSVC material on translation phases, compilation without linking, linking, preprocessing output, and assembly listings. For the process/runtime transition, use the official Windows process/thread overview and Sysinternals Process Monitor documentation.

Current process/runtime readings:

- About Processes and Threads: https://learn.microsoft.com/en-us/windows/win32/procthread/about-processes-and-threads
- Process Monitor: https://learn.microsoft.com/en-us/sysinternals/downloads/procmon
- Dynamic-link library search order (when runtime module resolution becomes relevant): https://learn.microsoft.com/en-us/windows/win32/dlls/dynamic-link-library-search-order

**Secondary:** Computer Organization — OpenALG

Use the chapters on binary number formats, CPU organization, instruction-set architecture, assembly, pipeline, memory, and virtual memory when you want a broader systems explanation beneath the Microsoft-specific toolchain/runtime material.

**Optional secondary:** XJTU ICS may be used only when its language/access is comfortable; it is no longer a required primary source.

**Sunday recall:** Explain one layer below the code you wrote that week.

This block supports the opening compiler/linker/process challenges.

### Weeks 7–10 — Command Environment as an Engineering Instrument

**Primary:** The Missing Semester

Read the shell, command-line environment, data-wrangling, editors, Git, debugging/profiling, metaprogramming, and security notes in sequence.

**Secondary:** PowerShell documentation

When a Missing Semester topic is Unix-specific, spend the next night asking how the equivalent concept appears in PowerShell/Windows.

### Weeks 11–14 — Git Beyond `commit` and `push`

**Primary:** Pro Git

Prioritize:

- Git basics quickly
- branching
- remotes
- Git tools
- internals / objects / references

The goal is to understand Git as a content-addressed system rather than a magical source-control application.

### Weeks 15–20 — Data Structures and Complexity

**Primary:** Open Data Structures

Read:

- interfaces and complexity notation
- array-based lists
- linked lists
- queues/deques
- hash tables
- trees

Do not rush to memorize implementations. Ask what workload makes each structure attractive or dangerous.

### Weeks 21–26 — Mathematical Thinking for Computing

**Primary:** Mathematics for Computer Science

Read the early material on:

- predicates, sets, and proofs
- contradiction and induction
- functions and relations
- graph concepts
- asymptotics / recurrences
- basic counting and probability

This block may be interleaved with Open Data Structures if alternating theory feels more sustainable.

### Weeks 27–33 — Operating Systems from Real Source

**Primary:** xv6 book

Read in book order, slowly:

- operating-system interfaces
- organization
- page tables
- traps / system calls
- interrupts
- locking
- scheduling

Do not attempt to memorize xv6. Learn to connect prose to real OS source.

### Weeks 34–38 — Networks as Protocol State

**Primary:** Computer Networking: Principles, Protocols and Practice

Prioritize:

- services and protocols
- application-layer principles
- transport principles
- UDP and TCP
- IP and routing
- data-link concepts

When practical, correlate reading with packets you have captured yourself.

### Weeks 39–44 — Performance as Evidence

**Primary:** Performance Analysis and Tuning on Modern CPUs

Read the introductory methodology first, then:

- CPU execution
- caches and memory
- branch behavior
- profiling
- benchmark pitfalls
- optimization case studies

The required habit is: profile before optimizing, and preserve a baseline.

### Weeks 45–48 — Modern C++ Judgment

**Primary:** C++ Core Guidelines

Do not read every rule front-to-back. Read major sections in this order:

- philosophy
- interfaces
- functions
- resource management
- classes
- error handling
- concurrency
- performance

For each reading session, compare at least one rule to code you have seen professionally.

### Weeks 49–52 — Secure Software Foundations

Alternate between:

**OWASP Cheat Sheet Series**

- threat modeling
- authentication
- authorization
- input validation
- logging
- transport-layer security
- secrets management
- vulnerability/dependency management

and

**OpenSSF Developing Secure Software**

Focus on principles, design, implementation, verification, dependencies, and supply-chain thinking.

## Year Two and Beyond — Rotating Reading Tracks

After the first year, bedtime reading should rotate among five tracks rather than follow one giant linear book list.

### Track A — Machine / OS Internals

- xv6 source + book
- Linux kernel documentation
- architecture and assembly material
- later primary specifications where useful

### Track B — Programming Languages

- C++ Core Guidelines
- Rust Book
- Python documentation
- PowerShell documentation
- source code of mature open-source libraries

### Track C — Algorithms / Mathematics / Data

- Open Data Structures
- Mathematics for Computer Science
- open database/source documentation selected by current projects

### Track D — Security

- OWASP Cheat Sheet Series
- OpenSSF secure development materials
- openly licensed security course/lab documentation selected during quarterly review
- security advisories and primary technical reports when licensing/access permits

### Track E — Performance / Frontier

- Performance Analysis and Tuning on Modern CPUs
- current open compiler/runtime/kernel documentation
- open research papers and specifications chosen during the quarterly State of Computing review

A simple rotation is two weeks per track, then repeat.

## Reading and Challenge Relationship

Nightly reading does not dictate the next challenge.

Challenges should pull knowledge in when it becomes useful. Reading gives the brain repeated exposure so that when the problem appears later, the concept is not entirely foreign.

The ideal moment is:

> "I've seen this idea before. Now I need to actually prove I understand it."

## Tiny Nightly Log

Optional format:

```text
Date:
Read:
One thing that clicked:
One question:
```

Do not let logging consume the 15-minute reading habit.
