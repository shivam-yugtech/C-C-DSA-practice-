#include<stdio.h>

int p1()
{
    int i=1,n,s=0;
    printf("Enter N:");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=i;
        i++;
    }
    printf("Sum of N Natural number is %d",s);
    return 0;
}
int p2()
{
    int i=1,n,s=0;
    printf("Enter N:");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=(2*i);
        i++;
    }
    printf("Sum of N Even Natural number is %d",s);
    return 0;
}
int p3()
{
    int i=1,n,s=0;
    printf("Enter N:");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=(2*i-1);
        i++;
    }
    printf("Sum of N Odd Natural number is %d",s);
    return 0;
}
int p4()
{
    int i=1,n,s=0;
    printf("Enter N:");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=i*i;
        i++;
    }
    printf("Sum of Square of N Natural number is %d",s);
    return 0;
}
int p5()
{
    int i=1,n,s=0;
    printf("Enter N:");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=i*i*i;
        i++;
    }
    printf("Sum of Cube of N Natural number is %d",s);
    return 0;
}