# Curriculum Map

This is a dependency-oriented roadmap rather than a rigid semester sequence.

The order may change when real work or curiosity creates a better learning opportunity.

# Level I — Elite Undergraduate Foundation

## A. Programming and Software Construction

- modern C++
- memory ownership and lifetime
- templates and generic programming
- interfaces and abstraction
- testing
- debugging
- profiling
- build systems
- source control
- automation
- software architecture
- APIs
- data representation

## B. Mathematical Foundations

Interleave as needed rather than front-loading everything.

- logic
- proof techniques
- sets and relations
- combinatorics
- graph theory
- discrete probability
- asymptotic reasoning
- linear algebra
- calculus where relevant
- information theory foundations

## C. Algorithms and Data Structures

- complexity
- arrays, lists, stacks, queues
- trees
- hash tables
- heaps
- graphs
- sorting and searching
- dynamic programming
- greedy algorithms
- amortized analysis
- randomized algorithms
- correctness reasoning

## D. Compilers, Linking, and Languages

- preprocessing
- translation units
- compilation
- assembly
- object files
- symbols
- linking
- static libraries
- dynamic libraries
- ABI
- calling conventions
- parsers
- ASTs
- interpreters
- bytecode
- virtual machines
- code generation

## E. Computer Architecture

- binary representation
- CPU execution
- registers
- instruction sets
- assembly
- stack frames
- caches
- branch prediction
- pipelines
- SIMD
- memory hierarchy
- MMU
- interrupts
- devices and buses

## F. Operating Systems

- processes
- threads
- system calls
- user/kernel mode
- scheduling
- virtual memory
- paging
- filesystems
- handles / file descriptors
- IPC
- synchronization
- permissions
- services
- device interaction

## G. Concurrency

- threads
- mutexes
- condition variables
- semaphores
- atomics
- memory ordering
- races
- deadlocks
- lock-free concepts
- task systems
- concurrent data structures

## H. Networking

- Ethernet
- ARP
- IP
- ICMP
- TCP
- UDP
- DNS
- routing
- sockets
- HTTP
- TLS
- packet capture
- latency and loss
- network troubleshooting

## I. Databases and Storage

- files
- serialization
- indexes
- B-trees
- transactions
- isolation
- WAL
- SQL
- query planning
- storage engines
- distributed storage basics

## J. Security and Defensive Engineering

Security is not isolated; it overlays the entire curriculum.

- threat modeling
- attack surfaces
- trust boundaries
- secure coding
- input validation
- authentication
- authorization
- least privilege
- process security
- OS hardening
- network defense
- logging
- forensics
- incident response
- vulnerability classes
- reverse engineering
- malware analysis concepts
- defensive tooling

## K. Cryptography

- randomness
- entropy
- hashing
- salts
- password hashing / KDFs
- MAC / HMAC
- symmetric encryption
- modes / AEAD
- asymmetric encryption
- digital signatures
- key exchange
- certificates
- PKI
- TLS
- key management
- replay protection
- nonces / IVs

Rule:

> Toy implementations may be built to understand mathematics. Real security must use vetted cryptographic libraries and primitives.

# Level II — Graduate-Level Depth

Once the foundation is mature:

- modify real operating systems
- study production compilers
- read database implementations
- analyze network stacks
- study advanced concurrency
- distributed systems
- formal methods
- advanced security
- binary analysis
- program analysis
- advanced architecture
- performance engineering
- systems research

The methodology changes from learning concepts to comparing implementations and tradeoffs.

# Level III — Authority / Research

At this stage:

- read papers continuously
- read production source code
- reproduce published results
- build experimental systems
- benchmark alternatives
- contribute patches or tools
- write technical reports
- identify unanswered questions
- conduct original research

Likely specialization should emerge naturally rather than being chosen prematurely.

# Dependency Sketch

```text
                         DISCRETE MATH
                              │
                              ▼
                    ALGORITHMS / COMPLEXITY
                              │
                              │
C++ ──► COMPILER/LINKER ──► ASSEMBLY ──► ARCHITECTURE
 │                              │              │
 │                              ▼              ▼
 └────► EXECUTABLES ───────► PROCESSES ──► OPERATING SYSTEMS
                                  │              │
                                  ▼              ▼
                               MEMORY ◄──── CONCURRENCY
                                  │
                                  ▼
                               SECURITY
                                  │
                  ┌───────────────┼───────────────┐
                  ▼               ▼               ▼
            VULNERABILITIES    FORENSICS       REVERSE
                               / IR           ENGINEERING

PROCESSES ─► SOCKETS ─► TCP/IP ─► NETWORKING ─► NETWORK SECURITY
                                             │
                                             ▼
                                            TLS
                                             ▲
                                             │
HASHING ─► MACs ─► CRYPTOGRAPHY ─► KEYS / SIGNATURES

                   EVERYTHING
                       │
                       ▼
               TOOLS / AUTOMATION
                       │
                       ▼
              BUILD REAL SYSTEMS
```
