# Challenge 01 — It Compiles, But It Won't Build
**Status:** Completed 2026-08-25 — first-pass assessment: **Solid**

## Scenario

You are working on a small C++ tool.

Everything was building yesterday. Another programmer reorganized some code into separate files.

Now the compiler appears to accept the code, but the final build fails with an **unresolved external symbol** / linker error.

Your job is to understand:

- Why compilation can succeed while the build still fails
- What happens between source text and an object file
- What the compiler produces before linking
- What information exists inside an object file
- How the linker resolves references between translation units
- How to inspect the evidence instead of guessing

The goal is not merely to fix the failure.

**You should be able to prove why it was broken.**

---

## Modes

- Investigate
- Debug

---

## Environment

Use your real Windows development setup:

- Rider and its terminal, or another editor when useful
- MSVC
- Developer Command Prompt / Developer PowerShell when needed
- Git repository

You write all implementation code yourself.

---

## Part 0 — Establish the Translation Model

Before treating `cl.exe` as a black box, build a working mental model of the early translation process.

Read enough authoritative material to explain, in your own words:

- source-character mapping
- line splicing
- preprocessing-token formation
- preprocessing directives and macro expansion
- what `#include` actually does
- execution-character mapping at a high level
- adjacent string-literal concatenation
- the distinction between source-level composition and linking

Do not memorize standard wording. The goal is to know what kind of transformation is occurring and why.

### Questions to investigate

- What is a translation unit?
- Does `#include` "link" another file?
- What is the difference between a physical source file and the translation unit eventually compiled from it?
- Is assembly necessarily emitted as a persistent intermediate file?

---

## Part 1 — Build a Small Multi-File Program

Create a tiny C++ program containing at least:

- `main.cpp`
- one additional `.cpp` file
- one header file

Requirements:

- `main.cpp` calls functionality implemented elsewhere
- the functionality is declared appropriately
- the implementation lives in the second `.cpp` file
- the program builds and runs successfully before continuing

The program itself can be trivial. The structure is what matters.

If you already have a small program that satisfies this structure, you may use it rather than rewriting it merely for ceremony.

---

## Part 2 — Separate Compilation From Linking

Do not rely only on an IDE Build button.

Figure out how to use the MSVC toolchain directly.

### Task

Compile each `.cpp` file **without linking**.

You should end up with separate `.obj` files.

### Questions to investigate

- What command-line option tells MSVC to compile without linking? /c
- Does each `.cpp` produce its own `.obj`? yes
- What happened to the header file? they were included into the cpps then preprocessed into the objs.
- Is an `.obj` executable? no
- What does an `.obj` contain conceptually? the cpps and associated included headers.
- Can an `.obj` refer to a function that is not defined inside that same `.obj`? yes.

Do not ask AI for the command first. Find it in the MSVC documentation, then use AI to discuss anything that remains unclear.

---

## Part 3 — Inspect the Object Files

MSVC includes a tool called **DUMPBIN**.

Figure out how to inspect the COFF symbol table of an object file.

Inspect **both** `.obj` files.

Find the function or method that `main.cpp` calls.

Compare how that symbol appears in:

- the object file containing `main`
- the object file containing the implementation

### Questions to investigate

- What does `UNDEF` mean? It means the actual code is not defined here in this obj.
- Which object file defines the symbol? Printout. ?printThing@Printout@@QEAAXXZ (public: void __cdecl Printout::printThing(void))
- Which object file merely references it? main
- Does the symbol look exactly like the C++ name you wrote? Nope. 
- If not, what might explain the difference? This display is closer to the compilers understanding of the name?

Do not worry if you do not yet fully understand name mangling. Observe first.

---

## Part 4 — Link the Program Manually

Without recompiling the `.cpp` files, take the `.obj` files you already produced and manually create the final executable.

Run it and verify that it works.

### Questions to investigate

- Which tool performs the final link? LINK! Not Zelda.
- What inputs did you give it? Just the two object files.
- What new file did it produce? main.exe
- What problem is the linker solving that the compiler did not solve earlier? The compiler created 2 object files but did not actually link them together into a usable executable.
- Which information could not have been finalized while each translation unit was being compiled independently? How the object files related to one another. IE: main.obj knew a function it calls exists somewhere else but had no concept of where.

---

## Part 5 — Break the Link

Now deliberately create a failure.

Do **not** change the source code.

Do **not** create a syntax error.

Instead, leave the object file containing the implementation out of the link step.

Attempt to link the program.

### Capture

Save the full linker error.

main.obj : error LNK2019: unresolved external symbol "public: void __cdecl Printout::printThing(void)" (?printThing@Printout@@QEAAXXZ) referenced in function main
main.exe : fatal error LNK1120: 1 unresolved externals

Then inspect the object file containing `main` again with DUMPBIN.

006 00000000 SECT3  notype       Static       | .text$mn
    Section length   16, #relocs    1, #linenums    0, checksum 952955D9
008 00000000 UNDEF  notype ()    External     | ?printThing@Printout@@QEAAXXZ (public: void __cdecl Printout::printThing(void))
009 00000000 SECT3  notype ()    External     | main
00A 00000000 SECT3  notype       Label        | $LN3

Correlate:

- what the symbol table says
- what the linker error says

### Questions to investigate

- Why was `main.cpp` still able to compile? Main can compile because the compiler is creating translations of each cpp file without linking to another.  
- What information did the compiler have? The compiler knew printThing existed in Printout.h but not ultimately where that would exist in the end exe.
- What information was it missing? The link showing where that function is defined.
- Why did that missing information only become a problem during linking? obj files aren't at a point where they need a link. They are independent translation units.
- What exact symbol was the linker trying to find? void __cdecl Printout::printThing(void)

---

## Part 6 — Create a Different Linker Failure

Restore both source files to the build.

Now create a **different** linker failure.

This time:

- both source files should still compile
- both object files should still be supplied to the linker
- the linker should still fail to match the caller to the implementation

Change something about the relationship between the declaration and definition.

Experiment before looking up examples.

### Goal

Produce a situation where:

- the compiler believes each translation unit is valid
- the linker cannot find the exact symbol expected by the caller

Once reproduced, inspect the symbols again and explain the mismatch from evidence.

---

## Part 7 — Inspect One Layer Deeper

After you understand the object/linker relationship, inspect the generated code rather than assuming what the compiler did.

Find the MSVC option that produces an assembly listing for a small source file.

Do not attempt to master assembly yet.

Observe enough to answer:

- Is the object-oriented structure you wrote directly visible to the CPU? Nope. 
- What happened to a method call at this lower representation? It uses the mangled symbol.
- Can you identify calls, registers, memory references, or symbol names that correspond to the source? I can sort of parse what I'm looking at. I did take an assembly course and really enjoyed it. I just don't remember much at this point.

The purpose is exposure across representations, not assembly mastery.

---

## Verification Plan

This challenge is primarily about proving a causal model.

Your evidence should allow another engineer to distinguish at least these states:

1. source does not compile
2. source compiles into object files
3. object files contain unresolved external references
4. all required definitions are supplied and linking succeeds
5. a required object is omitted and linking fails
6. all objects are present but symbol identities still do not match

Do not accept "the command worked" as sufficient evidence.

---

## Evidence to Collect

Keep the useful raw evidence from the investigation:

- source files
- exact MSVC commands you discovered
- generated `.obj` file names
- relevant DUMPBIN symbol output
- successful manual link command
- linker errors from both deliberate failures
- optional assembly-listing excerpt once you reach Part 7

Generated build artifacts themselves do not need to be committed simply to prove they existed.

---

## Resources

Use these as references rather than reading everything front-to-back.

### Phases of Translation

https://learn.microsoft.com/en-us/cpp/preprocessor/phases-of-translation?view=msvc-170

Use this to build the conceptual translation model.

### C/C++ Building Reference

https://learn.microsoft.com/en-us/cpp/build/reference/c-cpp-building-reference?view=msvc-170

Use this to understand the broad MSVC compilation and linking model.

### `/c` — Compile Without Linking

https://learn.microsoft.com/en-us/cpp/build/reference/c-compile-without-linking?view=msvc-170

Find and understand the option before using it.

### Compiler Command-Line Syntax

https://learn.microsoft.com/en-us/cpp/build/reference/compiler-command-line-syntax?view=msvc-170

Use this to understand how `cl` treats sources, objects, and linker options.

### CL Invokes the Linker

https://learn.microsoft.com/en-us/cpp/build/reference/cl-invokes-the-linker?view=msvc-170

Use this to understand where compilation ends and linking begins when `cl` is used normally.

### DUMPBIN `/SYMBOLS`

https://learn.microsoft.com/en-us/cpp/build/reference/symbols?view=msvc-170

Use this while inspecting object files.

### LINK Reference

https://learn.microsoft.com/en-us/cpp/build/reference/linking?view=msvc-170

Use this when manually creating the executable from object files.

### MSVC Assembly Listings

https://learn.microsoft.com/en-us/cpp/build/reference/fa-fa-listing-file?view=msvc-170

Use this only when you reach Part 7.

### LNK2019

https://learn.microsoft.com/en-us/cpp/error-messages/tool-errors/linker-tools-error-lnk2019?view=msvc-170

Prefer reading this **after** reproducing and inspecting the linker failure yourself.

---

## What to Bring Back

Do not write a formal report unless doing so becomes useful.

Bring back:

1. the relevant source
2. the commands you discovered
3. relevant DUMPBIN output
4. the linker errors you produced
5. your explanation of what happened

Your explanation should eventually be able to complete something like this in your own words:

> I think `main.cpp` was able to compile because ______.  
> Its object file contains ______.  
> The compiler does not need ______ at that stage.  
> When the linker runs, however, ______.  
> I can prove that from ______.

---

## Leverage Question

Do **not** build extra tooling merely because the curriculum values toolsmithing.

At the end, ask:

> Was any part of this investigation repetitive, opaque, or difficult enough that I would benefit from preserving or automating it later?

"Not yet" is a perfectly valid answer for Challenge 01.

---

## AI Policy for This Challenge

AI may:

- explain concepts after you have attempted to understand them
- point you toward authoritative documentation
- challenge your mental model
- review evidence you collected
- help you formulate experiments

AI may **not**:

- write the challenge implementation for you
- hand you required toolchain commands before you attempt to discover them in documentation
- fabricate evidence or replace inspection of the actual artifacts

The purpose of the challenge is to acquire manual competence at this layer.

---

## Rules

- Write all implementation code yourself.
- Prefer authoritative documentation before asking for commands.
- Ask questions whenever something genuinely does not make sense.
- Do not optimize for finishing quickly.
- Observe the actual files and tool output.
- Distinguish what you observed from what you inferred.
- Do not accept "it works now" as the final explanation.
- The challenge is complete when you can **prove why the failures happened**.

---

## Concepts This Opens Up

Do not study all of these yet. They are simply where this path leads:

- translation units
- preprocessing
- object files
- COFF
- symbols
- name mangling
- linkers
- static libraries
- dynamic libraries / DLLs
- ABI
- calling conventions
- debug symbols
- assembly
- executable formats

---

## Builds On

- existing C++ programming experience
- basic command-line navigation
- current reading on MSVC translation phases

## Opens Into

**Challenge 02 — What Did My Program Actually Do?**

The executable produced here becomes an object of investigation at the operating-system level.
