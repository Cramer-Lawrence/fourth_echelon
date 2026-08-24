# Resource Library

The curriculum should use the best source for the concept rather than following one course linearly.

Prefer:

1. primary documentation and specifications
2. source code
3. respected open textbooks
4. university open courseware
5. standards / RFCs
6. high-quality technical writing

For the nightly reading spine, prefer resources whose text/source is freely available and openly licensed. See `15_NIGHTLY_READING_PROGRAM.md`.

## Verified Open Core Library

### Introduction to Computer Systems — XJTU ICS

https://xjtu-ics.github.io/textbook/

Actively maintained systems textbook; CC BY-SA 4.0 with source available on GitHub. Covers program construction, machine representation, architecture, assembly, linking, memory, and systems interfaces.

### Computer Organization — OpenALG / University System of Georgia

https://alg.manifoldapp.org/projects/computer-organization

CC BY 4.0 open textbook covering digital logic through assembly, pipelines, memory, and virtual memory.

### Open Data Structures

https://opendatastructures.org/

Free/open textbook and source; CC BY. Includes pseudocode, Python, Java, and C++ variants.

### Mathematics for Computer Science — MIT OCW

https://ocw.mit.edu/courses/6-1200j-mathematics-for-computer-science-spring-2024/pages/readings/

Open course/textbook material; textbook CC BY-SA.

### xv6 RISC-V Book and Source

https://github.com/mit-pdos/xv6-riscv-book
https://github.com/mit-pdos/xv6-riscv

MIT-licensed teaching OS and book source.

### Computer Networking: Principles, Protocols and Practice

https://beta.computer-networking.info/
https://github.com/cnp3/ebook

Open networking textbook with Creative Commons licensing.

### Performance Analysis and Tuning on Modern CPUs

https://github.com/dendibakh/perf-book

CC0 performance-engineering book.

### C++ Core Guidelines

https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
https://github.com/isocpp/CppCoreGuidelines

Living open guidelines for modern C++ design and engineering.

### The Rust Programming Language

https://doc.rust-lang.org/stable/book/
https://github.com/rust-lang/book

Official Rust book; source MIT/Apache-2.0.

### Python Documentation / CPython Source

https://docs.python.org/3/
https://github.com/python/cpython

Official documentation and implementation source under the PSF license.

### PowerShell Documentation

https://learn.microsoft.com/powershell/
https://github.com/MicrosoftDocs/PowerShell-Docs

Official documentation source; Creative Commons documentation license and MIT repository code.

### The Missing Semester of Your CS Education

https://missing.csail.mit.edu/
https://github.com/missing-semester/missing-semester

CC BY-NC-SA course on shell/tooling/environment fluency, Git, debugging/profiling, and security.

### Pro Git

https://git-scm.com/book/en/v2
https://github.com/progit/progit2

Open-source Git book under Creative Commons licensing.

### Linux Kernel Documentation and Source

https://docs.kernel.org/
https://github.com/torvalds/linux

Primary open-source material for kernel APIs, locking, tracing, testing, fault injection, build systems, architecture, and internals.

### OWASP Cheat Sheet Series

https://cheatsheetseries.owasp.org/
https://github.com/OWASP/CheatSheetSeries

CC BY-SA security guidance for builders and defenders.

### OpenSSF Developing Secure Software

https://github.com/ossf/secure-sw-dev-fundamentals

CC BY secure-software-development course source.

## Professional Primary References

Some challenge-specific references may be free professional documentation rather than part of the open nightly reading spine.

Examples:

- Microsoft C++ build and linker documentation
- Sysinternals documentation
- Wireshark documentation
- platform SDK documentation
- RFCs and standards

These should be used when they are the authoritative reference for an active engineering problem.

## Resource Rule

Do not collect links for their own sake.

Every resource should answer one of these questions:

- What am I trying to understand?
- What assignment requires this?
- Which section should I read?
- What evidence should I be able to produce afterward?

## Source-Code Reading

At advanced levels, source code itself becomes reading material.

Read mature open-source systems with a specific question in mind. Examples may include compilers, kernels, runtimes, databases, cryptographic libraries, debuggers, profilers, build tools, networking stacks, and developer utilities.

Do not attempt to "read a repository" front-to-back. Trace a behavior, interface, bug, or design decision through the code.
