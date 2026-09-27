# Student Management System

A console-based **Student Management System** developed in C++ to manage student records efficiently through a simple terminal interface.

## 📌 Project Overview

This project allows users to add, view, search, update, and delete student information. It also calculates student grades based on marks and provides an option to save student data into a text file.

The project was created to practice important C++ programming concepts such as **classes, objects, vectors, functions, loops, conditional statements, and file handling**.

## ✨ Features

* ➕ Add multiple students
* 📋 Display all student records
* 🔍 Search for a student using their roll number
* ✏️ Update student information
* 🗑️ Delete a student
* 📊 Automatically calculate student grades
* 💾 Save student records to a text file
* 🚫 Handle invalid menu choices
* 📁 Store student data using a vector

## 🛠️ Technologies Used

* **C++**
* Standard C++ Libraries:

  * `<iostream>`
  * `<string>`
  * `<vector>`
  * `<fstream>`

## 📚 Concepts Used

This project demonstrates:

* Classes and Objects
* Member Functions
* Encapsulation
* Vectors
* Loops
* Conditional Statements
* Switch Statements
* Functions
* String Handling
* File Handling
* Searching
* Updating and deleting vector elements

## 🎓 Grade Calculation

The program calculates grades according to the student's marks:

|        Marks | Grade |
| -----------: | :---- |
| 90 and above | A+    |
|        80–89 | A     |
|        60–79 | B     |
|        50–59 | C     |
|        40–49 | D     |
|     Below 40 | Fail  |

## 📂 Project Structure

```text
studentmanagement/
│
├── student.c++
├── students.txt
└── README.md
```

`students.txt` is created when the **Save Data** option is selected.

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone https://github.com/your-username/studentmanagement.git
```

### 2. Open the project folder

```bash
cd studentmanagement
```

### 3. Compile the program

```bash
g++ student.c++ -o student
```

### 4. Run the program

On Windows:

```bash
.\student
```

## 🖥️ Main Menu

```text
===== STUDENT MANAGEMENT SYSTEM =====
1. Add Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Save Data
7. Exit

Enter your choice:
```

## 💾 Data Storage

When the **Save Data** option is selected, student information is stored in `students.txt`.

The data is saved in the following format:

```text
Name|Roll|Marks|Course
```

For example:

```text
Vinika|101|85.5|CSE
```

## 🚀 Future Improvements

Possible improvements for future versions:

* Load previously saved students automatically when the program starts
* Add input validation
* Prevent duplicate roll numbers
* Add sorting by marks or roll number
* Add a graphical user interface
* Improve file/database management
* Add login functionality for administrators

## 👩‍💻 Author

**Vinika Saud**

B.Tech Computer Science and Engineering

---

### ⭐ Project Status

**Completed — Beginner C++ Console Project**
