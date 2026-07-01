#include<iostream>
using namespace std;

int SumN(int n)
{
    if(n==1)
        return 1;
    return n+SumN(n-1);
}
int SumNOdd(int n)
{
    if(n==1)
        return 1;
    return 2*n-1 + SumNOdd(n-1);
}
int SumNEven(int n)
{
    if(n==1)
        return 2;
    return 2*n + SumNEven(n-1);
}
int SumNSquare(int n)
{
    if(n==1)
        return 1;
    return n*n + SumNSquare(n-1);
}
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int SumDigit(int n)
{
    if(n==0)
        return 0;
    return n%10 + SumDigit(n/10);  
}
void DecimalToBinary(int n)
{
    if(n>0)
    {
        DecimalToBinary(n/2)
        cout<<n%2;                                      
    }
}
int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    return fibo(n-1) + fibo(n-2);
}
int Hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        else
            return Hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        else
            return Hcf(a,b%a);
    }
}
int power(int x,int y)
{
    if(y==0)
        return 1;
    return x*power(x,y-1);
}