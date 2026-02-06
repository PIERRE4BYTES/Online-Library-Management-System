# Online Library Management System (C++)

## 📌 Overview
The Online Library Management System is a console-based C++ application developed using Object-Oriented Programming (OOP) principles.  
It provides basic library operations such as managing books and users, borrowing and returning books, and searching books by title.

This project is intended for academic use and demonstrates clean code organization, modular design, and basic unit testing.

---

## ✨ Features
- Add and remove books
- Add users
- Search books by title
- Borrow and return books
- Prevent borrowing of unavailable books
- Unit testing for core functionality

---

## 🛠️ Technologies Used
- C++
- Object-Oriented Programming (OOP)
- Standard Template Library (STL)
- Git & GitHub

---

## 📂 Project Structure
Online-Library-Management-System/
│
├── src/
│ ├── Book.h
│ ├── Book.cpp
│ ├── User.h
│ ├── User.cpp
│ ├── Library.h
│ ├── Library.cpp
│ └── main.cpp
│
├── tests/
│ └── LibraryTests.cpp
│
├── README.md
└── DOCUMENTATION.md


---

## ⚙️ How to Compile and Run

### Compile the main program
```bash
g++ src/*.cpp -o library
Run the program
./library
🧪 Run Tests
g++ tests/LibraryTests.cpp src/Book.cpp src/User.cpp src/Library.cpp -o tests
./tests


# Online-Library-Management-System
