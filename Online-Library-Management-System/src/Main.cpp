#include "Library.h"
#include <iostream>


int main() {
  Library library;

  library.addBook(Book(1, "Clean Code", "Robert C. Martin"));
  library.addBook(Book(2, "The C++ Programming Language", "Bjarne Stroustrup"));

  library.addUser(User(101, "Alice"));
  library.addUser(User(102, "Bob"));

  library.searchByTitle("C++");

  library.borrowBook(101, 2);
  library.returnBook(101, 2);

  return 0;
}
