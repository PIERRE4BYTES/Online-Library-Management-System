#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "User.h"
#include <string>
#include <vector>


class Library {
private:
  std::vector<Book> books;
  std::vector<User> users;

  Book *findBook(int bookId);
  User *findUser(int userId);

public:
  void addBook(const Book &book);
  void removeBook(int bookId);
  void addUser(const User &user);

  void borrowBook(int userId, int bookId);
  void returnBook(int userId, int bookId);

  void searchByTitle(const std::string &title) const;
};

#endif
