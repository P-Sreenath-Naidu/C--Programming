# MULTI - FILE C PROGRAMMING PROJECT 
A demonstration of multi-file compilation in C, showcasing how a single program can be organised into multiple source files and compiled together into one executable.

# OVERVIEW
This project illustrates modular programming in C by dividing functionality across several source files, each handling a distinct category of number or string processing. It is designed to demonstrate good practice in structuring larger C programs, including function declarations, definitions, and multi-file compilation using GCC.

The program includes functions for checking and processing numbers, covering the following categories:

- Switch-case & Nested Switch-case
- Prime number checking
- Perfect number checking
- Armstrong number checking
- Palindrome checking
- 
## PROJECT STRUCTURE
```
├── main.c
├── Prime_2.c
├── Perfect_3.c
├── strong_4.c
├── Armstrong_5.c
└── Palindrome_6.c
```
Each file contributes a distinct set of functions to the overall program, which are combined at compile time into a single executable.

## Concepts Demonstrated
- Code reuse
- Range processing
- Menu driven application
- Core C programming fundamentals
- Functions (declarations and definitions)
- Header files
- Multi-file compilation
- Modular programming principles
- Use of the GCC compiler
## Getting Started
    -> Prerequisites
       - A C compiler (GCC recommended)
       - A terminal or command-line interface
### Compilation
     Compile all source files together using GCC:

```bash
gcc main_.c Prime_2.c Perfect_3.c strong_4.c Armstrong_5.c Palindrome_6.c -o project
```
### Running the Program
Once compiled, run the executable with:
```bash
./project
```
## Purpose
The primary aim of this project is to demonstrate how a larger C program can be divided into multiple source files and compiled together as a single, cohesive executable — a practice that improves code organisation, readability, and maintainability in larger software projects.

## Author
    P. Sreenath Naidu

## Licence
This project is open for educational use. Feel free to fork, modify, and build upon it.
