# Curriculum Map

This is a dependency-oriented roadmap rather than a rigid semester sequence.

The order may change when real work, curiosity, or a useful project creates a better learning opportunity.

The curriculum is tracked through two maps:

1. **Knowledge Domains** — what the student understands.
2. **Capability Arcs** — what the student can actually do with that understanding.

Neither map is sufficient by itself.

# Part I — Knowledge Domains

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
- reliability and maintainability

## B. Mathematical Foundations

Interleave as needed rather than front-loading everything.

- logic
- proof techniques
- sets and relations
- combinatorics
- graph theory
- discrete probability
- statistics
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
- observability facilities

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
- time-series/event storage concepts
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
- telemetry
- forensics
- incident response
- vulnerability classes
- reverse engineering
- malware analysis concepts
- integrity monitoring
- detection engineering
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

## L. Personal Tooling and Computing Environments

This is a first-class engineering domain, not merely a productivity topic.

- shells and command environments
- CLI design
- scripting and pipelines
- environment variables
- executable discovery
- configuration management
- terminal workflows
- package/tool installation
- bootstrap systems
- dotfiles and reproducible setup
- task automation
- build wrappers and orchestration
- editor and IDE integration
- filesystem watchers
- background services
- IPC
- local databases
- TUIs and dashboards
- structured logging
- local APIs
- remote execution
- machine inventory
- configuration drift
- plugin architectures
- extensible CLIs
- telemetry and observability
- personal automation systems
- usability and interface design for engineering tools

## M. Distributed Systems and Infrastructure

Introduced when single-machine understanding is strong enough to make the tradeoffs meaningful.

- clocks and time
- partial failure
- replication
- consistency
- consensus concepts
- distributed coordination
- queues and messaging
- service discovery
- remote execution
- observability across machines
- deployment and configuration
- fault tolerance
- distributed builds and compute


## N. Programming Language Mastery and Tool Selection

- deep modern C++
- Rust systems/infrastructure proficiency
- Python automation and investigative tooling
- PowerShell Windows systems automation
- SQL and data-query fluency
- TypeScript/JavaScript for tool interfaces and web boundaries
- C and assembly as low-level literacy
- Bash/shell fluency
- language/runtime tradeoff analysis
- comparative implementations and measured tool selection
- interoperability / FFI
- recognizing when an existing tool or pipeline is better than a new program

See `12_PROGRAMMING_LANGUAGE_MASTERY.md`.

## O. Testing, Measurement, and Performance Engineering

- test design and testability
- unit / integration / system / regression testing
- property-based testing and fuzzing
- stress, soak, fault-injection, and concurrency testing
- benchmarking methodology
- reproducibility and experimental control
- CPU, memory, I/O, network, and latency profiling
- tracing and event correlation
- performance counters and hardware-aware measurement
- observability and telemetry design
- visualization of diagnostic evidence
- statistical interpretation of noisy measurements
- performance budgets and regression gates
- documenting baselines, methodology, results, and tradeoffs

## P. AI-Augmented Engineering and Computing Frontier

- strengths and failure modes of code-generating AI
- reviewing and validating generated code
- constrained and specification-driven generation
- AI-assisted test and experiment generation
- agent permissions, sandboxing, and observability
- comprehension debt in AI-maintained systems
- human takeover and recovery when AI fails
- deliberately adversarial AI fault-injection exercises
- evaluation of emerging languages, runtimes, hardware, tooling, and security techniques
- primary-source reading and frontier experiments
- adopt / monitor / ignore decision-making

# Part II — Capability Arcs

Capability arcs describe practical powers that accumulate across many knowledge domains. They are intentionally revisited over time.

## 1. Build Intelligence

```text
compile manually
    ↓
inspect object files and symbols
    ↓
understand build systems
    ↓
inspect dependency relationships
    ↓
validate toolchains and environments
    ↓
trace build execution
    ↓
compare successful and failed environments
    ↓
automate failure diagnostics
    ↓
reason about distributed/reproducible builds
```

## 2. Machine Observation

```text
inspect files
    ↓
inspect processes
    ↓
observe process creation and exit
    ↓
inspect modules / handles / memory
    ↓
observe OS event streams
    ↓
correlate machine activity
    ↓
retain historical telemetry
    ↓
build useful behavioral baselines
```

## 3. Filesystem and Integrity

```text
traverse files
    ↓
record metadata
    ↓
hash content
    ↓
create manifests
    ↓
detect change
    ↓
reason about trust of the manifest
    ↓
verify signatures / provenance
    ↓
monitor important state continuously
```

## 4. Networking and Remote Systems

```text
local sockets
    ↓
client/server programs
    ↓
packet inspection
    ↓
secure channels
    ↓
authentication and authorization
    ↓
remote diagnostics
    ↓
structured command execution
    ↓
machine comparison / orchestration
```

## 5. Defensive Visibility

```text
hash files
    ↓
inspect processes
    ↓
inspect network activity
    ↓
understand persistence
    ↓
collect events
    ↓
correlate evidence
    ↓
reason about trust and provenance
    ↓
build host visibility
    ↓
investigate anomalies
```

## 6. Binary and Runtime Understanding

```text
object files / symbols
    ↓
executable formats
    ↓
assembly
    ↓
calling conventions / ABI
    ↓
process memory
    ↓
debugging and tracing
    ↓
reverse engineering
    ↓
runtime instrumentation / program analysis
```

## 7. Personal Environment Engineering

```text
learn shell fluency
    ↓
automate repetitive commands
    ↓
standardize personal workflows
    ↓
build reusable utilities
    ↓
compose utilities
    ↓
create coherent command interfaces
    ↓
bootstrap machines reproducibly
    ↓
integrate local and remote systems
    ↓
operate a deeply customized personal environment
```

The endpoint is not a predetermined "personal OS." The system should emerge from genuine use.


## 8. Evidence Engineering

```text
reproduce a failure
    ↓
establish baseline
    ↓
automate correctness checks
    ↓
instrument behavior
    ↓
profile the real bottleneck
    ↓
benchmark competing approaches
    ↓
visualize and correlate evidence
    ↓
quantify regressions and tradeoffs
    ↓
build specialized diagnostic harnesses
```

## 9. AI-Augmented Engineering

```text
manual implementation and understanding
    ↓
AI as tutor / reviewer / research assistant
    ↓
AI-assisted tests and experiments
    ↓
selective bounded generation
    ↓
constraint-driven implementation delegation
    ↓
automated validation and measurement
    ↓
agent orchestration with permissions and telemetry
    ↓
human recovery from AI failure
    ↓
AI as a deeply integrated but replaceable multiplier
```

## 10. Frontier Adaptation

```text
notice important change
    ↓
read primary sources
    ↓
identify claims and assumptions
    ↓
build a focused experiment
    ↓
measure against current practice
    ↓
adopt / monitor / ignore
    ↓
revisit as the field changes
```


## 11. Language and Tool Judgment

```text
follow prescribed language
    ↓
write idiomatic code in several languages
    ↓
understand runtime / memory / concurrency tradeoffs
    ↓
compare implementations with evidence
    ↓
choose language from constraints
    ↓
compose languages, OS tools, databases, and scripts
    ↓
select the smallest correct tool for the problem
```

## 12. Cross-Representation Technical Literacy

```text
read source
    ↓
read compiler/linker output
    ↓
read symbols and binaries
    ↓
read assembly / registers / memory
    ↓
read process and OS traces
    ↓
read packets and protocol state
    ↓
read profiles / hardware counters
    ↓
correlate evidence across layers
```

# Part III — Increasing Levels of Depth

## Level I — Rigorous Foundation

Build strong undergraduate-level competence across the major domains while producing practical tools and evidence.

## Level II — Advanced Systems Depth

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
- build more sophisticated personal infrastructure

The methodology changes from learning concepts to comparing implementations and tradeoffs.

## Level III — Authority / Research

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
              ┌───────────────────┼────────────────────┐
              ▼                   ▼                    ▼
           TOOLING             SECURITY             NETWORKING
              │                   │                    │
              └─────────────┬─────┴─────────────┬──────┘
                            ▼                   ▼
                       OBSERVABILITY       REMOTE SYSTEMS
                            │                   │
                            └─────────┬─────────┘
                                      ▼
                              PERSONAL LEVERAGE
```
