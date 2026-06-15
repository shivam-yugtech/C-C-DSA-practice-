#include<iostream>
#include<string.h>

using namespace std;

class Cuboid
{
    private:
        int l,b,h;
    public:
        Cuboid()
        {
            l=0;
            b=0;
            h=0;
        }
        Cuboid(int length,int breadth,int heigth)
        {
            l=length;
            b=breadth;
            h=heigth;
        }
};

class Customer
{
    private:
        int cust_id;
        char name[20];
        char email[50];
        char number[15];
    public:
        Customer()
        {
            cust_id=0;
            strcpy(name,"Ananymous");
            strcpy(email,"xyz@gmail.com");
            strcpy(number,"0000000000");

        }
        Customer(int id,char n[],char e[],char n[])
        {
            cust_id=id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(number,n);
        }
};
class Time
{
    private:
        int hr,min,sec;
    public:
        Time(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
};
class Book
{
    private:
        int bookid;
        char title[50];
        float price;
    public:
        Book()
        {
            bookid=0006;
            strcpy(title,"C++");
            price=780;
        }
        book(int id,char t,float p)
        {
            bookid = id;
            strcpy(title,t);
            price=p;
        }
};
class Complex
{
    private:
        int real,imaginary;
    public:  
        Complex(int a,int b)
        {
            real=a;
            imaginary=b;
        }
        void showData()
        {
            cout<<"\nreal = "<<real<<"  imaginary = "<<imaginary;
        }
};
int main()
{
    Complex c[5]={Complex(1,4),Complex(4,3),Complex(8,2),Complex(6,9),Complex(5,9)};
    for(int i=0;i<5;i++)
        c[i].showData();
    cout<<endl;
    return 0;
}