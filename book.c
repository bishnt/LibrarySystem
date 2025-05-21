#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "book.h"

extern books book[MAX_BOOK], checkBook;
extern bookCount = 0;

loadBook(){
  FILE *fp;
  fp = fopen("books.txt", "r");
  bookCount = 0;
  while(fscanf(fp, "%d,%99[^,],%99[^,],%d",book[bookCount].bookId,book);)

}
addBook(){
  FILE *fp;
  fp = fopen("books.txt", "w");

  printf("\n\nEnter Book ID, Book Name and Author Name");
  fscanf(fp, "%s %s %s", book[bookCount].bookId, book[bookCount].bookName, book[bookCount].bookAuthor);
  printf("\n\nSuccessfully Written Books Info!");
  bookCount ++;
  fclose(fp);
}

deleteBook(){
  FILE *fp;
  int id = 0, i = 0;
  fp = fopen("books.txt", "r");
  printf("Enter the ID of the Book you want to delete");
  scanf("%d",id);
  while(("fp", "%s %s %s", checkBook.bookId, checkBook.bookName, checkBook.bookAuthor ) != EOF() )
  {
    if(book[i].bookId == id)
    {
    
    }
  }



}
