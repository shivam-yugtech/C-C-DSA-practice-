#include<stdio.h>

int main()
{
    int x;
    printf("Entwer a number: ");
    scanf("%d",&x);
    printf("Number %d without last digit is %d",x,x/10);
    return 0;
}

int p4()
{
    int x;
    printf("Entwer a number: ");
    scanf("%d",&x);
    printf("last digit of a number %d is %d",x,x%10);
    return 0;
}

int p3()
{
    int a,b,c;
    char x,y,z;
    printf("Enter three charecters A,B,C : ");
    scanf("%c %c %c",&x,&y,&z);
    a=x;
    b=y;
    c=z;
    printf("ASCII Code of : \n\t%c is %d \n\t%c is %d \n\t%c is %d",x,a,y,b,z,c);
    return 0;
}

int p2()
{
    int x;
    char y;
    printf("Enter a ASCII code : ");
    scanf("%d",&x);
    y=x;
    printf("character in %d is %c",x,y);
    return 0;
}

int p1()
{
    int x;
    char y;
    printf("Enter a charecter: ");
    scanf("%c",&y);
    x=y;
    printf("ASCII Code of %c is %d",y,x);
    return 0;
}