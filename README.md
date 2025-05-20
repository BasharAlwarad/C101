# C101

## C Compilation Steps

### Preprocessing

- Handles directives starting with `#` such as `#include`, `#define`, and conditional compilation.
- Produces a **preprocessed source file**.

### Compiling

- Converts the preprocessed source code into **assembly code** specific to the target architecture.
- Produces a `.s` (assembly) file.

### Assembling

- Translates assembly code into **machine code** (binary instructions).
- Produces an **object file** (`.o` or `.obj`).

### Linking

- Links one or more object files and libraries (standard or user-defined) into a **single executable**.
- Resolves **symbol references** between files.

## debugging

### use gdb for debugging

- gdb file.exe
