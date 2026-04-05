#include<stdio.h>

// recursion

int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int hcf(int a, int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        return hcf(a%b,b);
        }
    else
    {
        if(b%a==0)
            return a;
        return hcf(a,b%a);
    }
}
int fib(int n)
{
    if(n==0||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void printfib(int n)
{
    int i;
    for(i=0;i<=n;i++)
        printf("%d ",fib(i));
}
void fibonacci(int n,int x,int y)       
{
    if(n>=0)
    {
        printf("%d ",x+y);
        fibonacci(n-1,y,x+y);
    }
}
int count_digit(int n)
{
    int count;
    if(n>0)
    {
        count++;
        count_digit(n/10);
    }
    return count;  
}
int countdigit(int n)
{
    if(n==0)
        return 0;
    return 1+countdigit(n/10);
}
double power(double x,double y)
{
    if(y==0)
        return 1;
    if(y>0)
        return x*power(x,y-1);
    else
        return 1/x*power(x,y+1);
}
int main()
{
    double x=power(3,3);
    printf("%lf",x);
    return 0;
}