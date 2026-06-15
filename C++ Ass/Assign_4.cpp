#include<iostream>
using namespace std;

int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
void f1(int n,int m)
{
    int i;
    for(i=n+1;i<m;i++)
        if(isprime(i))
            cout<<i<<" ";
}
int f2(int n)
{
    int h=0,x;
    while(n)
    {
        x=n%10;
        if(h<x)
            h=x;
        n=n/10;
    }
    return h;
}
int f3(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
    {
        p*=x;
    }
    return p;
}
float power(float x,float y)         //if power is -ve also 
{
    if(y==0)
        return 1;
    if(y>0)
    {
        return x*power(x,y-1);
    }
    else
    {
        return power(x,y+1)*(1/x);
    }
}
int f5(int n)
{
    int a=-1,b=1,c=0,i;
    for(i=0;c<=n;i++)
    {
        c=a+b;
        if(c==n)
            return 1;
        a=b;
        b=c;
    }
    return 0;
}