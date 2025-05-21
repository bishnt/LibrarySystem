//CRUD operations and info related with books
#ifndef BOOK_H
#define BOOK_H

#define MAX_BOOK 100

typedef books{
int bookId;
char bookName[100];
char bookAuthor[100];
int bookQuantity;
}

void addBook();
void deleteBook();
void updateBook();
void listAllBooks();
void searchBooks();
void loadBooks();
void saveBooks();

#endif

