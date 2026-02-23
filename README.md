# 💻 EBAC – Do Zero ao Pro (C Project)

📚 This repository contains a C programming project developed during the **EBAC – Do Zero ao Pro** course.

The project is a **command-line (CLI) registry system** that simulates a basic notary office workflow, allowing users to register, search, and delete records using file-based storage.

---

## 🚀 Project Overview

The system enables the user to:

- 📝 Register a person (Create)
- 🔎 Search for a person by CPF (Read)
- ❌ Delete a person by CPF (Delete)

Each user is stored in an individual file named after their CPF.  
Data is saved in CSV format:

CPF,FirstName,LastName,Role

The records remain stored even after the program is closed, ensuring **data persistence**.

---

## 🧠 Concepts Practiced

This project consolidates fundamental programming concepts in C:

- 🔧 Functions and modular structure
- 📂 File handling (fopen, fprintf, fgets, fclose, remove)
- ⌨️ User input and output (printf, scanf)
- 🔄 Control flow (switch, loops, conditionals)
- 🔤 String manipulation
- ⚠️ Basic error handling
- 💾 Persistent storage using the filesystem

---

## 🗂 Data Structure Example

File name:
12345678900

File content:
12345678900,Joao,Souza,Manager

---

## ⚙️ Compilation & Execution

Compile with GCC:
gcc main.c -o cartorio

Run:
./cartorio

⚠️ Note: The program uses system("cls") and system("pause"), which are Windows-specific.

---

## 🎯 Learning Outcome

This project strengthened:

- 🧩 Logical thinking  
- 🏗 Structured programming  
- 📁 Practical file manipulation in C  

It represents an important step in transitioning from theoretical study to applied software development.

---

## 👤 Author

**Guilherme Lima**  
🔄 Career transition to Technology  
🎓 CS50 Student  
📊 Future Data Science Student (NCI)
