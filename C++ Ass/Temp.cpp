// Revisiting C Language 

#include<stdio.h>

int EvenorOdd(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}

int factorial(int n)
{
    int x;
    if(n==1)
        break;
    x=n*factorial(n-1);
    return x;
}
void swap(int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
}

int LCM(int x,int y)
{
    for(int L=a>b?a:b;L<x*y;L++)
        if(L%x==0 && L%y==0)
            return L;   
}
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}