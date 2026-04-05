#include<stdio.h>


int sumN(int n)
{
    
    if(n==1)
        return 1;
    return n+sumN(n-1);
}
int sumoddN(int n)
{
    if(n==1)
        return 1;
    return 2*n-1+sumoddN(n-1);
}
int sumevenN(int n)
{
    if(n==1)
        return 2;
    return 2*n+sumevenN(n-1);
    
}
int sumsquareN(int n)
{
    if(n==1)
        return 1;
    return n*n+sumsquareN(n-1);
    
}
int sumdigit(int n)
{
    if(n==0)
        return 0;
    return n%10+sumdigit(n/10);
}
int main()
{
    printf("%d",sumN(5));
    printf("\n");
    return 0;
}