# Cartório – Command-Line Registry System in C

A command-line program in C that registers, searches and deletes people's records, storing each one in its own file. Built during EBAC's "IT Professional: From Zero to Pro" course.

**Language:** C · **Platform:** Windows (console) · **Status:** Completed (learning project)

## Overview

The program simulates a simple notary-office ("cartório") workflow. The user chooses an option from a menu and the program creates, reads or deletes a person's record. Records are saved as files, so they persist after the program closes. The interface is in Portuguese.

## Features

| Option | What it does |
|---|---|
| Register | Asks for CPF (Brazilian ID number), first name, last name and role, and saves them to a file named after the CPF |
| Search | Finds a person by CPF and prints their details |
| Delete | Removes a person's record by CPF |
| Exit | Closes the program |

Each record is stored in CSV format:

```
CPF,FirstName,LastName,Role
```

## How to run

```bash
gcc Cartorio.c -o cartorio
cartorio.exe
```

> **Note:** the program uses `system("cls")` and `system("pause")`, which are Windows-specific.

## Project structure

```
Cartorio.c   Full program: menu, register, search and delete functions
```

## What I learned

- Structuring a program into functions with a menu loop
- Reading and writing files in C (`fopen`, `fprintf`, `fgets`, `fclose`, `remove`)
- Handling user input and basic errors, such as a record not found
- Persisting data without a database

---

**Guilherme Lima** · Aspiring IT Support Technician · [LinkedIn](https://www.linkedin.com/in/glimaalmeida) · [GitHub](https://github.com/GuiLimaTi)
