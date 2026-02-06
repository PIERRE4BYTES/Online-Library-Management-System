# Project Documentation  
## Online Library Management System (C++)

---

## 1. Introduction
The Online Library Management System is a C++ application designed to simulate basic library operations using Object-Oriented Programming concepts.  
The system manages books and users and supports borrowing, returning, and searching for books.

The objective of this project is to apply OOP principles such as encapsulation, abstraction, and modularity in a real-world inspired application.

---

## 2. System Design

### 2.1 Class Diagram Overview
The system consists of three main classes:
- Book
- User
- Library

The Library class acts as the central controller and manages collections of Book and User objects.

---

## 3. Class Descriptions

### 3.1 Book Class
**Responsibilities:**
- Store book details
- Track availability status

**Attributes:**
- `id` : Unique book identifier
- `title` : Book title
- `author` : Book author
- `isBorrowed` : Availability status

**Key Methods:**
- `borrowBook()`
- `returnBook()`
- Getter methods for attributes

---

### 3.2 User Class
**Responsibilities:**
- Store user details
- Track borrowed books

**Attributes:**
- `userId` : Unique user identifier
- `name` : User name
- `borrowedBooks` : List of borrowed book IDs

**Key Methods:**
- `borrowBook(int bookId)`
- `returnBook(int bookId)`
- Getter methods

---

### 3.3 Library Class
**Responsibilities:**
- Manage books and users
- Handle borrowing and returning logic

**Attributes:**
- `books` : Collection of Book objects
- `users` : Collection of User objects

**Key Methods:**
- `addBook()`
- `removeBook()`
- `addUser()`
- `borrowBook()`
- `returnBook()`
- `searchByTitle()`

---

## 4. OOP Concepts Used

### Encapsulation
All data members are declared private and accessed using public methods.

### Abstraction
The Library class hides internal implementation details and exposes only necessary operations.

### Composition
The Library class contains Book and User objects, demonstrating a has-a relationship.

### Modularity
The system is divided into multiple header and source files for better readability and maintenance.

---

## 5. Testing Strategy
Unit tests are implemented using simple assertions in `LibraryTests.cpp`.  
Both positive and negative test cases are included to verify system behavior.

---

## 6. Limitations
- No persistent storage (data resets on program exit)
- Console-based interface only
- No authentication system

---

## 7. Future Scope
- File-based or database storage
- Interactive menu-driven UI
- Role-based access control
- Book reservation system

---

## 8. Conclusion
The Online Library Management System successfully demonstrates the application of Object-Oriented Programming principles in C++.  
It provides a scalable foundation that can be extended with additional features in future versions.

---

## Author
KARANJA
