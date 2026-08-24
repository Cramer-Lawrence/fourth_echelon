# Security and Defensive Engineering

Security is a core pillar of the curriculum.

The purpose is to understand how systems fail so they can be built, investigated, and defended well.

## Scope

Topics may include threat modeling, attack surfaces, trust boundaries, secure coding, authentication, authorization, least privilege, process and OS security, network security, cryptography, vulnerability classes, reverse engineering, binary analysis, malware-analysis concepts, logging, forensics, incident response, hardening, defensive automation, integrity monitoring, and detection engineering.

## Counter-Hacking / Defensive Workflow

A practical defensive incident model:

```text
Detection
   ↓
Containment
   ↓
Investigation
   ↓
Eradication
   ↓
Recovery
   ↓
Hardening
```

A future investigation might ask:

- What processes are running?
- What network connections exist?
- What changed recently?
- What persistence mechanisms exist?
- What logs contain evidence?
- Which privileges were involved?
- What evidence must be preserved?
- What should be isolated?
- What can still be trusted?

## Security Should Be Integrated

Do not wait for a standalone security semester.

When learning binaries, ask what information the binary exposes and what symbols reveal.

When learning memory, ask what makes memory corruption dangerous and why DEP, ASLR, and stack protections exist.

When learning networking, ask what an observer can see and what TLS does and does not protect.

When learning OS processes, ask what privileges a process has and what an attacker could do with them.

When building tools, ask what happens if input is malicious and where the trust boundaries are.

## Cryptography

Required areas:

- hashing
- integrity
- salts
- password hashing
- KDFs
- HMAC
- symmetric encryption
- authenticated encryption
- asymmetric encryption
- signatures
- key exchange
- certificates
- key management
- randomness
- nonces
- replay prevention
- TLS

Key distinctions:

- hashing is not encryption
- encryption is not authentication
- signatures provide different properties from encryption
- key management is often harder than the primitive itself

## Safety / Authorization Rule

All security exercises must use systems the student owns, deliberately vulnerable labs, CTF environments, toy programs, or environments with explicit authorization.

The curriculum should teach offensive concepts when necessary for understanding defense, but practical work remains authorized and controlled.

## Cryptography Rule

Toy cryptographic implementations may be written to understand concepts.

Anything intended to provide real security should use established, vetted cryptographic libraries and primitives rather than custom cryptography.
