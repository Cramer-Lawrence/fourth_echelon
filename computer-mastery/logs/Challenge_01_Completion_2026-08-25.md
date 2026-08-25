# Challenge 01 Completion — 2026-08-25

## Challenge

**Challenge 01 — It Compiles, But It Won't Build**

Modes: Investigate + Debug

## Status

Completed.

Assessment: **Solid** for the intended first-pass depth.

The challenge should still be revisited implicitly in later work; completion does not mean the compilation/linking domain is mastered permanently.

## Evidence Produced

The student:

- built and ran a small multi-file C++ program
- used MSVC directly rather than relying only on the IDE build button
- compiled translation units separately with `/c`
- inspected COFF object files and symbol tables with DUMPBIN
- identified defined and `UNDEF` symbols across object files
- manually linked object files into `main.exe`
- deliberately reproduced an omitted-object linker failure
- correlated `LNK2019` / `LNK1120` with the unresolved symbol in `main.obj`
- deliberately created a second linker failure where both object files were present but symbol identities did not match
- identified the free-function symbol `?printThing@@YAXXZ` versus the member-function symbol `?printThing@Printout@@QEAAXXZ`
- formed the useful model of a mangled symbol as an exact linker-level key
- inspected generated assembly and recognized the call to the mangled symbol
- observed that the object-file call site still required relocation / final link resolution
- restored the correct implementation, linked successfully, ran the executable, and pushed the completed work to Git

## Concepts Demonstrated

- physical source file versus translation unit
- preprocessing and `#include` as source-level composition rather than linking
- each separately compiled `.cpp` / translation unit producing an object file
- object files as compiled machine-level artifacts rather than source containers
- unresolved external references being legal in an object file
- symbol definitions versus symbol references
- C++ name mangling and why exact symbol identity matters
- compilation succeeding independently of final linking
- linker responsibility for matching cross-object symbol references
- linker failures caused by missing inputs versus mismatched symbol identities
- source → symbol → assembly → relocation → link relationship
- C++ object-oriented abstractions lowering into registers, memory, calling conventions, and machine instructions

## Notable Observations

Including `<iostream>` made the tiny `printout.cpp` translation unit and resulting object artifact dramatically larger than the handwritten source suggested. This made header/transitive-include cost tangible rather than theoretical.

The student independently noticed the size discrepancy, hypothesized that `<iostream>` was responsible, and then correlated the object-file symbols with standard-library machinery.

The strongest conceptual click was recognizing mangled symbols as exact identities that caller and provider must agree on. This transformed the linker error from an opaque diagnostic into an observable failed key match.

## Mistakes / Corrections That Were Productive

- Initially described an object file as conceptually containing the `.cpp` and included headers. Corrected to machine code/data plus linker metadata, symbols, relocations, and external references.
- Initially used "libraries" when describing `#include`. Corrected the distinction between including header text and linking library inputs.
- Initially described the mismatched-definition failure as though the definition did not exist. Refined this to: a definition existed, but it defined a different mangled symbol.

These corrections materially improved the mental model rather than being superficial terminology fixes.

## Capability Assessment

### Inspect object-file symbols

Level: **Usable**

The student can use DUMPBIN to locate a symbol, distinguish definition from `UNDEF`, and correlate the same symbol across multiple object files and linker diagnostics.

### Diagnose basic linker failures from evidence

Level: **Usable**

The student successfully distinguished:

1. a required object file omitted from the link
2. both object files present but the caller/provider symbol identities mismatched

### Cross-representation tracing

Level: **Emerging**

The student can already connect:

```text
C++ declaration/call → mangled symbol → object symbol table → assembly call → linker resolution
```

This should be reinforced in later debugger, profiler, crash-dump, binary, and reverse-engineering work.

## Follow-Up Direction

Challenge 02 follows the successfully linked executable across the next boundary:

```text
Executable → Process → Operating System
```

Because Challenge 01 performance was strong, Challenge 02 should require more independent filter design, differential experimentation, and interpretation of raw runtime evidence rather than prescribing every command.
