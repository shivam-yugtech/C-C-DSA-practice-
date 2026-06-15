#include<iostream>
#include<math.h>
using namespace std;


void swap(int &,int &);
int add(int,int,int=0);
float area(int);
int area(int,int);
float area(int,int,int);
int max(int,int);
double max(double,double);


// by call by reference 

void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(int a,int b,int c)
{
    float s,ar;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
int max(int x,int y)
{
    return x>y?x:y;
}
double max(double x,double y)
{
    return x>y?x:y;
}
float add(int x,float y)
{
    return a+b;
}
