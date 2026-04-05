#include<stdio.h>

int p1()
{
    int i=1;
    while(i<=5)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}
int p2()
{
    int i=1;
    printf("1st 10 Natural number :");
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
int p3()
{
    int i=10;
    printf("1st 10 Natural number in reverse order:");
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
int p4()
{
    int i=1;
    printf("1st 10 odd Natural number in :");
    while(i<=10)
    {
        printf("%d\n",2*i-1);
        i++;
    }
    return 0;
}
int p5()
{
    int i=10;
    printf("1st 10 Odd Natural number in reverse order:");
    while(i>=1)
    {
        printf("%d\n",2*i-1);
        i--;
    }
    return 0;
}
int p6()
{
    int i=1;
    printf("1st 10 Even Natural number:");
    while(i<=10)
    {
        printf("%d\n",2*i);
        i++;
    }
    return 0;
}
int p7()
{
    int i=10;
    printf("1st 10 Even Natural number in reverse order:");
    while(i>=1)
    {
        printf("%d\n",2*i);
        i--;
    }
    return 0;
}
int p8()
{
    int i=1;
    printf("Square of 1st 10 Natural number :");
    while(i<=10)
    {
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}
int p9()
{
    int i=1;
    printf("Cube of 1st 10 Natural number :");
    while(i<=10)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}
int main()
{
    int i=1;
    printf("table of 5:");
    while(i<=10)
    {
        printf("5 x %d = %d\n",i,5*i);
        i++;
    }
    return 0;
}