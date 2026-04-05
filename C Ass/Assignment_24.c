#include<stdio.h>
#include "./Assignment_23.c"

void print_All_primeNum(int,int);
int factorial(int);
int SumOf_N_term_series(int);
void fibonacci_series(int);


void print_All_primeNum(int x,int y)
{
    int i;
    for(i=x;i<=y;i++)
    {
        if(check_prime(i))
            printf("%d ",i);
    }
}
int factorial(int n)
{
    int fact=1;
    while(n)
    {
        fact*=n;
        n--;
    }
    return fact;
}
int SumOf_N_term_series(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=factorial(i)/i;
    }
    return sum;
}
void fibonacci_series(int n)
{
    int x=-1,y=1,z,i;
    for(i=1;i<=n;i++)
    {
        z=x+y;
        printf("%d ",z);
        x=y;
        y=z;
    }
}
int main()
{
    print_All_primeNum(20,40);
    printf("\n");

    return 0;
}