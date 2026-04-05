#include<stdio.h>

int main()
{
    int x,digit;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a digit: ");
    scanf("%d",&digit);
    printf("Append number is %d",x*10+digit);
    return 0;
}

int p4()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("number after last digit is %d",x/10*10);
    return 0;
}

int p3()
{
    printf("size of int is %d",sizeof(int));
    printf("\nsize of char is %d",sizeof(char));
    printf("\nsize of float is %d",sizeof(float));
    printf("\nsize of double is %d",sizeof(double));
    return 0;
}

int p2()
{
    char ch='+';
    printf("ASCII code of %c is %d",ch,ch);
    return 0;
}

int p1()
{
    int x,s;
    printf("Enter a three digit no.: ");
    scanf("%d",&x);
    s=x/100+x/10%10+x%10;
    printf("sum of %d is %d",x,s);
    return 0;

}