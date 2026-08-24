# AI and the Living Edge

## Purpose

Computer Mastery is intended to remain relevant across years of rapid change. AI, increasingly parallel hardware, new security models, evolving runtimes, and other shifts may substantially change engineering practice.

The curriculum must therefore accomplish two things simultaneously:

1. preserve deep human capability across the stack
2. aggressively exploit new tools when the student is capable of evaluating them

## AI Relationship

AI is a combat multiplier.

The human remains responsible for technical ownership: intent, architecture, understanding, verification, security judgment, measurement, diagnosis, and recovery.

AI may accelerate these responsibilities but should not become the only entity capable of performing them.

A useful test:

> If AI fails, can the human take control?

If yes, AI is leverage. If no, the system has accumulated dangerous dependence.

## Manual Competence Before Delegated Competence

Early curriculum rule:

> If the purpose of an exercise is to teach how something works, AI does not implement that thing for the student.

AI may:

- explain concepts
- find and summarize authoritative sources
- ask Socratic questions
- review student-written code
- challenge assumptions
- propose experiments
- critique benchmark methodology
- suggest edge cases
- help interpret evidence

AI should not write the challenge implementation during foundational learning.

## Delegation Ladder

```text
Human writes everything being learned
        ↓
AI reviews and challenges
        ↓
AI helps generate tests / experiments
        ↓
AI generates bounded, well-understood sections
        ↓
Human supplies invariants, constraints, budgets, threat model
        ↓
AI implements larger bounded work
        ↓
Automated verification and measurement
        ↓
Agent orchestration
        ↓
Human retains ability to inspect, diagnose, and recover
```

The governing rule is:

> Never delegate beyond your ability to evaluate.

## Comprehension Debt

AI can create technical debt in human understanding.

A codebase may continue passing tests while successive AI modifications produce critical systems that nobody can explain or repair. This is comprehension debt.

Watch for:

- critical code nobody can explain
- generated concurrency or security logic accepted only because tests pass
- repeated AI maintenance without human model-building
- inability to manually debug below the AI abstraction
- architecture whose invariants are implicit in generated code

The curriculum should train the student to recognize and control this debt.

## AI Fault-Injection Exercises

At advanced stages, AI may deliberately create flawed code or misleading diagnoses as an adversarial training mechanism.

Possible faults include:

- subtle correctness bugs
- race conditions
- security vulnerabilities
- memory or resource leaks
- performance regressions
- incorrect benchmark methodology
- nondeterministic failures
- failures visible only under stress
- multiple interacting defects
- plausible but incorrect proposed fixes

The student should not be told the defect in advance when discovery is the learning objective.

Required response should increasingly include reproduction, instrumentation, evidence, root cause, repair, regression tests, profiling / benchmarking, and documentation.

## Living-Edge Reviews

At least quarterly, perform a State of Computing and Security review.

Survey meaningful developments in areas such as:

- AI-assisted and agentic engineering
- processors, GPUs, accelerators, and heterogeneous compute
- concurrency and parallel programming
- operating systems and virtualization
- languages, runtimes, and compilers
- observability and profiling
- offensive and defensive security
- supply-chain and software integrity
- cryptography and hardware security
- distributed systems and infrastructure
- new high-impact open-source tools and research

Do not chase trends indiscriminately.

For promising developments:

1. read primary sources
2. identify the actual technical claim
3. build a focused experiment when useful
4. measure against existing practice
5. decide: adopt, monitor, or ignore
6. record what would cause the decision to change

## Annual Curriculum Reset

Once per year, perform a deeper review of the curriculum map itself.

Ask:

- Which assumptions from a year ago are now outdated?
- What new capability has become foundational?
- What once-promising trend has faded?
- Which new security threats or defenses matter?
- Which parts of the personal environment should evolve?
- Are human fundamentals keeping pace with the amount of work being delegated to AI?

The goal is not to master computing as it existed when the curriculum began.

The goal is to become increasingly capable as computing itself changes.
