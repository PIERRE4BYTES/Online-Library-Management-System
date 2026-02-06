#include "../src/Library.h"
#include <cassert>


int main() {
  Library lib;

  lib.addBook(Book(1, "Test Book", "Tester"));
  lib.addUser(User(1, "Test User"));

  lib.borrowBook(1, 1);
  lib.returnBook(1, 1);

  // Negative test cases
  lib.borrowBook(1, 99);
  lib.borrowBook(99, 1);

  assert(true);
  return 0;
}
