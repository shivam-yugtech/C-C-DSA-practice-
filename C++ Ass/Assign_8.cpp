#include<iostream>
using namesapce std;

class complex{
    private:
        int real,imaginary;
    public:
        void setValues(int x,int y)
        {
            real=x;
            imaginary=y;
        }
        void displayvalues()
        {
            cout<<"real = "<<real<<"\nimaginary = "<<imaginary;
        }
};

class Time{
    private:
        int hr,min,sec;
    public:
        void setTime(int h,int m,int s)
        {
            if(h>=0 && h<=24)
                hr=h;
            if(m>0 && m<60)
                min=m;
            if(s>0 && s<60)
                sec=s;
        }
        void displayTime()
        {
            cout<<hr<<" hr "<<min<<" min "<<sec<<" sec ";
        }
};

class Date{
    private:
        int day,month,year;
    public:
        void setDate(int d,int m,int y)
        {
            if(d>=1 && d<=31)
                day=d;
            if(m>=1 && m<=12)
                month=m;
            year=y;
        }
        void dispalyDate()
        {
            cout<<"d="<<day<<",m="<<month<<",y="<<year;
        }
        void displaydate()
        {
            cout<<day<<"-"<<month<<"-"<<year;
        }
};

class circle {
    private:
        int R;
    public:
        void setRadius(int r)
        {
            R=r;
        }
        int getradius()
        {
            return R;
        }
        float area()
        {
            return 3.14*R*R;
        }
        float circumference()
        {
            return 2*3.14*R;
        }
};