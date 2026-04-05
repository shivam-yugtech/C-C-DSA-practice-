#include<stdio.h>

int p1()
{
    int i=1,n;
    printf("Enter N :");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}
int p2()
{
    int i=1,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("1st N Natural number :");
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
int p3()
{
    int i=0,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("1st N Natural number in reverse order:");
    while(i<n)
    {
        printf("%d\n",n-i);
        i++;
    }
    return 0;
}
int p4()
{
    int i=1,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("1st N odd Natural number in :");
    while(i<=n)
    {
        printf("%d\n",2*i-1);
        i++;
    }
    return 0;
}
int p5()
{
    int i=0,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("1st N Odd Natural number in reverse order:");
    while(i<n)
    {
        printf("%d\n",2*(n-i)-1);
        i++;
    }
    return 0;
}
int p6()
{
    int i=1,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("1st N Even Natural number:");
    while(i<=n)
    {
        printf("%d\n",2*i);
        i++;
    }
    return 0;
}
int p7()
{
    int i=0,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("1st N Even Natural number in reverse order:");
    while(i<n)
    {
        printf("%d\n",2*(n-i));
        i++;
    }
    return 0;
}
int p8()
{
    int i=1,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("Square of 1st N Natural number :");
    while(i<=n)
    {
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}
int p9()
{
    int i=1,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("Cube of 1st N Natural number :");
    while(i<=n)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}
int p10()
{
    int i=1,n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("table of 5:");
    while(i<=n)
    {
        printf("%d\n",5*i);
        i++;
    }
    return 0;
}