#include<stdio.h>

int p1()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0)
        printf("positive");
    else   
        printf("non-positive");     
}
int p2()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%5==0)
        printf("divisible");
    else   
        printf("not divisible");     
}
int p3()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%2==0)
        printf("Even number");
    else   
        printf("Odd number");     
}
int p4()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x/2*2==x)
        printf("Even number");
    else   
        printf("Odd number");     
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x&1)
        printf("Odd number");
    else   
        printf("Even number");     
}