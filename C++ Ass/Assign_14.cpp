#include<iostream>
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
        friend Complex operator+(Complex x,Complex y);
        friend Complex operator-(Complex x,Complex y);
        friend Complex operator*(Complex x,Complex y);
};
friend Complex operator+(Complex x,Complex y);
{
    Complex temp;
    temp.a=x.a+y.a;
    temp.b=x.a+y.b;
    return temp;
}
friend Complex operator-(Complex x,Complex y);
{
    Complex temp;
    temp.a=x.a-y.a;
    temp.b=x.a-y.b;
    return temp;
}
friend Complex operator*(Complex x,Complex y);
{
    Complex temp;
    temp.a=x.a*y.a;
    temp.b=x.a*y.b;
    return temp;
}

class Time
{
    private:
        int hr,min,sec;
    public:
        friend ostream& operator<< (ostream &dout,Time t);
        friend istream& operator>> (istream &din ,Time &t);
        Time operator= (time t)
        {
            time temp;
            temp.hr=t.hr;
            temp.min=t.min;
            temp.sec=t.sec;
            return temp;
        }
};
ostream& operator<< (ostream &dout,Time t)
{
    dout<<t.hr<<"hr"<<t.min<<"min"<<t.sec<<"sec";
    return dout;
}
istream& operator>> (iostream &din,time &t)
{
    din>>t.hr>>t.min>>t.sec;
    return din;
}