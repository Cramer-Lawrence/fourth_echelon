# Challenge 01 — It Compiles, But It Won't Build

## Scenario

You are working on a small C++ tool.

Everything was building yesterday. Another programmer reorganized some code into separate files.

Now the compiler appears to accept the code, but the final build fails with an **unresolved external symbol** / linker error.

Your job is to understand:

- Why compilation can succeed while the build still fails
- What the compiler produces before linking
- What information exists inside an object file
- How the linker resolves references between translation units
- How to inspect the evidence instead of guessing

The goal is not just to fix the problem.

**You should be able to prove why it was broken.**

---

## Environment

Use your real Windows development setup:

- VS Code
- MSVC
- Command line / Developer Command Prompt as needed
- Git repository

You write all code yourself.

---

## Part 1 — Build a Small Multi-File Program

Create a tiny C++ program containing at least:

- `main.cpp`
- One additional `.cpp` file
- One header file

Requirements:

- `main.cpp` calls a function implemented elsewhere
- The function is declared appropriately
- The implementation lives in the second `.cpp` file
- The program builds and runs successfully before continuing

The program itself can be trivial. The structure is what matters.

---

## Part 2 — Separate Compilation From Linking

Do not rely only on the VS Code Build button.

Figure out how to use the MSVC toolchain directly.

### Task

Compile each `.cpp` file **without linking**.

You should end up with separate `.obj` files.

### Questions to investigate

- What command-line option tells MSVC to compile without linking?
- Does each `.cpp` produce its own `.obj`?
- What happened to the header file?
- Is an `.obj` executable?
- What does an `.obj` contain conceptually?
- Can an `.obj` refer to a function that is not defined inside that same `.obj`?

Do not ask for the command immediately. Find it in the documentation.

---

## Part 3 — Inspect the Object Files

MSVC includes a tool called **DUMPBIN**.

Figure out how to inspect the COFF symbol table of an object file.

Inspect **both** `.obj` files.

Find the function that `main.cpp` calls.

Compare how that function appears in:

- The object file containing `main`
- The object file containing the implementation

### Questions to investigate

- What does `UNDEF` mean?
- Which object file defines the function?
- Which object file merely references it?
- Does the function name look exactly like the name you wrote in C++?
- If not, why might that be?

Do not worry if you do not yet fully understand name mangling. Just notice what you observe.

---

## Part 4 — Link the Program Manually

Without recompiling the `.cpp` files:

Take the `.obj` files you already produced and manually create the final executable.

Run it and verify that it works.

### Questions to investigate

- Which tool performs the final link?
- What inputs did you give it?
- What new file did it produce?
- What problem is the linker solving that the compiler did not solve earlier?

---

## Part 5 — Break the Link

Now deliberately create a failure.

Do **not** change the source code.

Do **not** create a syntax error.

Instead:

Leave the object file containing the function implementation out of the link step.

Attempt to link the program.

### Capture

Save the full linker error.

Then inspect the object file containing `main` again with DUMPBIN.

Try to correlate:

- What the symbol table says
- What the linker error says

### Questions to investigate

- Why was `main.cpp` still able to compile?
- What information did the compiler have?
- What information was it missing?
- Why did that missing information only become a problem during linking?
- What exactly was the linker trying to find?

---

## Part 6 — Create a Different Linker Failure

Restore both source files to the build.

Now create a **different** linker failure.

This time:

- Both source files should still compile
- Both object files should still be supplied to the linker
- The linker should still fail to match the caller to the implementation

Change something about the relationship between the function declaration and its definition.

Try experimenting before looking up examples.

### Goal

Produce a situation where:

- The compiler believes each translation unit is valid
- The linker cannot find the exact symbol expected by the caller

Once you have reproduced it, inspect the symbols again.

---

## Resources

Use these as references rather than reading everything front-to-back.

### MSVC Compiler Command-Line Syntax

https://learn.microsoft.com/en-us/cpp/build/reference/compiler-command-line-syntax?view=msvc-170

Use this to understand how `cl` treats source files, object files, and linker options.

### CL Invokes the Linker

https://learn.microsoft.com/en-us/cpp/build/reference/cl-invokes-the-linker?view=msvc-170

Use this to understand where compilation ends and linking begins.

### DUMPBIN `/SYMBOLS`

https://learn.microsoft.com/en-us/cpp/build/reference/symbols?view=msvc-170

Use this while inspecting the object files.

### LINK Reference

https://learn.microsoft.com/en-us/cpp/build/reference/linking?view=msvc-170

Use this when manually producing the executable from object files.

### LNK2019

https://learn.microsoft.com/en-us/cpp/error-messages/tool-errors/linker-tools-error-lnk2019?view=msvc-170

Prefer reading this **after you have reproduced the linker failure yourself**.

---

## What to Bring Back

Do not write a formal report.

Send:

1. Your header and `.cpp` files
2. The commands you figured out
3. Relevant DUMPBIN output
4. The linker errors you produced
5. Your explanation of what you think happened

Your explanation should answer something roughly like:

> I think `main.cpp` was able to compile because ______.  
> Its object file contains ______.  
> The compiler does not need ______ at that stage.  
> When the linker runs, however, ______.

Use your own words.

---

## Rules

- Write all code yourself.
- Use documentation before asking for commands.
- Ask questions whenever something does not make sense.
- Do not optimize for finishing quickly.
- Observe the actual files and tool output.
- Do not accept “it works now” as the final explanation.
- The challenge is complete when you can **prove why the failure happened**.

---

## Concepts This Opens Up

Do not study all of these yet. They are simply where this path leads:

- Translation units
- Preprocessing
- Object files
- COFF
- Symbols
- Name mangling
- Linkers
- Static libraries
- Dynamic libraries / DLLs
- ABI
- Calling conventions
- Debug symbols
- Assembly
- Executable formats
