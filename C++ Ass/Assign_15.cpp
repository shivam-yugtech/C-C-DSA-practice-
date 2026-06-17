#include<stdio.h>
using namespace std;

class Complex
{
    private:
        a,b;
    public:
        void setData(int x,int y):a(x),b(y)
        {}
        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<" ";
        }
        friend Complex operator- (Complex c);
};
Complex operator- (Complex c)
{
    Complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
}

class Integer
{
    private:
        int a,b;
    public:
        void setData(int x,int y):a(x),b(y)
        {}
        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<" ";
        }
       friend Integer operator! (Integer x, Integer y);
       friend Integer operator== (Integer x, Integer y);
};
Integer operator! (Integer x, Integer y)
{
    if(x.a!=y.a && x.b!=y.b)
        
}

class Student
{
    private:
        int roll_no,age;
        char name[30];
    public:
        void setStudent(int r,char n[],int a)
        {
            roll_no=r;
            
        }
};