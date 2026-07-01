#include<iostream>
using namespace std;

void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        cout<<" "<<n;
    }
}
void printNRev(int n)
{
    if(n>0)
    {
        cout<<" "<<n;
        printNRev(n-1);
    }
}
void printNodd(int n)
{
    if(n>0)
    {
        printNodd(n-1);
        cout<<" "<<2*n-1;
    }
}
void printNoddRev(int n)
{
    if(n>0)
    {
        cout<<" "<<2*n-1;
        printNoddRev(n-1);
    }
}

void printNEven(int n)
{
    if(n>0)
    {
        printNEven(n-1);
        cout<<" "<<2*n;
    }
}
void printNEvenRev(int n)
{
    if(n>0)
    {
        cout<<" "<<2*n;
        printNEvenRev(n-1);
    }
}
void printNSquare(int n)
{
    if(n>0)
    {
        printNSquare(n-1);
        cout<<" "<<n*n;
    }
}
void printNSquareRev(int n)
{
    if(n>0)
    {
        cout<<" "<<n*n;  
        printNSquareRev(n-1);
    }
}
void printNCube(int n)
{
    if(n>0)
    {
        printNCube(n-1);
        cout<<" "<<n*n*n;
    }
}
void printNCubeRev(int n)
{
    if(n>0)
    {
        cout<<" "<<n*n*n;  
        printNCubeRev(n-1);
    }
}