
//1. Create a structure Book with data members as bname, id, author, price. Accept the
//values of all these members from user and display them.
#include <stdio.h>
#include <string.h>
typedef struct book 
{
    char bname[30];
    int id;
    char author[50];
    int price;
} book;

void add(book*);
void display(book);

void main() 
{
    book b1;
    add(&b1);
    display(b1);
    
}

void display(book b1) 
{
    printf("\n--- Book Details ---\n");
    printf("Name   : %s\n", b1.bname);
    printf("ID     : %d\n", b1.id);
    printf("Author : %s\n", b1.author);
    printf("Price  : %d\n", b1.price);
}

void add(book* b1) 
{
    printf("Enter Book Name: ");
    fgets(b1->bname, sizeof(b1->bname), stdin);
    b1->bname[strcspn(b1->bname, "\n")] = '\0'; 

    printf("Enter Book ID: ");
    scanf("%d", &b1->id);
    getchar(); // consume leftover newline

    printf("Enter Book Author: ");
    fgets(b1->author, sizeof(b1->author), stdin);
    b1->author[strcspn(b1->author, "\n")] = '\0'; 

    printf("Enter Book Price: ");
    scanf("%d", &b1->price);
}
