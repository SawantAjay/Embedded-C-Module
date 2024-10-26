/*Write a function to initialize a Book struct with a title and publication date. Then print the details 
of the book in main.*/

#include<stdio.h>

typedef struct {

    char title[100];
    int publicationdate;

}book;

void printbookdetails(const book* book){

    printf("Title: %s\n",book->title);
    printf("Publication year: %d\n",book->publicationdate);
}

int main(){

    book mybook={"book_name",2024};

    printbookdetails(&mybook);

    return 0;
}