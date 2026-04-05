#include<stdio.h>
#include<string.h>
struct Book
{
    int bookid;
    char title[20];
    float price;
};
struct Book inputBook();
void showBook(struct Book);
int main()
{
    int x;
    struct Book b1={1,"C Language",340.5},b2,b3;
    struct Book b[5];
    b2.bookid=2;
    strcpy(b2.title,"Java");
    b2.price=450.0;

    b3=inputBook();
    showBook(b1);
    showBook(b2);
    showBook(b3);
    printf("\n");
    return 0;
}
struct Book inputBook()
{
    struct Book b;
    printf("Enter id, title and price of a book");
    scanf("%d",&b.bookid);
    fflush(stdin);
    fgets(b.title,20,stdin);
    b.title[strlen(b.title)-1]='\0';
    scanf("%f",&b.price);
    return b;
}
void showBook(struct Book b)
{
    printf("\n%d %s %f",b.bookid,b.title,b.price);
}