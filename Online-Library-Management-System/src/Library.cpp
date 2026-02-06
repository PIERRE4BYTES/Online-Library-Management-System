#include "Library.h"
#include <algorithm>
#include <iostream>


Book *Library::findBook(int bookId) {
  for (auto &book : books)
    if (book.getId() == bookId)
      return &book;
  return nullptr;
}

User *Library::findUser(int userId) {
  for (auto &user : users)
    if (user.getId() == userId)
      return &user;
  return nullptr;
}

void Library::addBook(const Book &book) { books.push_back(book); }

void Library::removeBook(int bookId) {
  books.erase(std::remove_if(books.begin(), books.end(),
                             [bookId](Book &b) { return b.getId() == bookId; }),
              books.end());
}

void Library::addUser(const User &user) { users.push_back(user); }

void Library::borrowBook(int userId, int bookId) {
  Book *book = findBook(bookId);
  User *user = findUser(userId);

  if (!book || !user) {
    std::cout << "User or Book not found.\n";
    return;
  }

  if (book->getStatus()) {
    std::cout << "Book already borrowed.\n";
    return;
  }

  book->borrowBook();
  user->borrowBook(bookId);
  std::cout << "Book borrowed successfully.\n";
}

void Library::returnBook(int userId, int bookId) {
  Book *book = findBook(bookId);
  User *user = findUser(userId);

  if (!book || !user) {
    std::cout << "User or Book not found.\n";
    return;
  }

  book->returnBook();
  user->returnBook(bookId);
  std::cout << "Book returned successfully.\n";
}

void Library::searchByTitle(const std::string &title) const {
  for (const auto &book : books) {
    if (book.getTitle().find(title) != std::string::npos) {
      std::cout << "ID: " << book.getId() << ", Title: " << book.getTitle()
                << ", Author: " << book.getAuthor()
                << ", Available: " << (book.getStatus() ? "No" : "Yes")
                << std::endl;
    }
  }
}
