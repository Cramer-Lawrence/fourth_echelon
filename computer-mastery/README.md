# Computer Mastery

A long-term, self-directed computer science and computer engineering curriculum built around real engineering work.

The goal is not merely to become a better programmer. The goal is to become an unusually capable computing engineer who can understand, instrument, modify, defend, automate, and reshape computer systems — and invent useful tools when existing ones are not enough.

The program combines rigorous computer science and computer engineering foundations with systems investigation, toolsmithing, security, and technical invention.

## North Star

> Become the kind of engineer who can sit down at an unfamiliar computer problem, discover what is actually happening, and manufacture whatever leverage is needed to solve it.

That includes being able to:

- understand systems beneath common abstractions
- diagnose failures that cross layers
- observe and measure instead of guessing
- build custom tools and workflows
- progressively shape a personal computing environment around real needs
- reason adversarially and build defensive visibility
- combine ideas from multiple domains into novel solutions
- turn repeated friction into reusable capability

## Core Principle

> Learn by doing real work.

Challenges should feel like assignments from an engineering team, not textbook drills.

## Learning Modes

Every challenge should primarily fall into one or more of these modes:

1. **Build** — create a useful tool, system, utility, automation, or piece of infrastructure.
2. **Investigate** — observe an existing system and determine how it actually behaves.
3. **Debug** — diagnose a failure and prove the root cause.
4. **Defend** — identify weaknesses, harden systems, investigate suspicious behavior, or build defensive tooling.
5. **Research** — read deeper material, compare approaches, reproduce results, or form original conclusions.
6. **Integrate / Extend** — revisit earlier work and turn isolated capability into something more reusable, composable, or powerful.

## Mastery Standard

A topic is not considered mastered merely because code works.

- **Explain it** — describe it clearly without hiding behind terminology.
- **Build it** — construct a simplified form yourself.
- **Observe it** — demonstrate its behavior using real tools or measurements.
- **Diagnose it** — reason about failures and prove causes.
- **Break assumptions** — especially in security, consider malicious or adversarial inputs.
- **Leverage it** — automate, compose, reuse, instrument, or integrate the capability so it makes future work easier.

## The Two Maps

The curriculum is tracked in two complementary ways:

1. **Knowledge domains** — what the student understands: algorithms, operating systems, networking, architecture, databases, security, and so on.
2. **Capability arcs** — what the student can actually do: inspect binaries, observe processes, compare machines, trace builds, monitor integrity, diagnose networks, build remote tooling, and more.

Both matter. Knowledge without capability is incomplete; capability without understanding is fragile.

## Personal Computing System

A continuous long-term outcome of the curriculum is a highly customized personal computing environment.

This is not a predesigned monolithic application. It should grow organically as useful challenge projects graduate into real tools, scripts, services, workflows, libraries, diagnostics, security instrumentation, and environment customizations.

The guiding question is:

> What repeated friction or missing visibility is worth fixing permanently?

## Repository Structure

```text
computer-mastery/
├── README.md
├── docs/
├── challenges/
├── templates/
├── logs/
├── tools/
├── experiments/
├── systems/
├── security-labs/
├── papers/
└── research/
```

The structure should evolve when the work demands it. Do not prematurely design a giant personal-tooling architecture.

Start with `docs/00_VISION_AND_GOALS.md`, then `docs/02_CURRICULUM_MAP.md`.

Use `docs/07_PROJECT_CONTEXT_FOR_CHATGPT.md` as persistent context for the ChatGPT project.

## Additional Core Documents

- `docs/10_EVIDENCE_ENGINEERING.md` — testing, profiling, benchmarking, instrumentation, reproducibility, and proving engineering claims
- `docs/11_AI_AND_LIVING_EDGE.md` — AI delegation policy, deliberate AI fault injection, comprehension debt, and keeping the curriculum current
