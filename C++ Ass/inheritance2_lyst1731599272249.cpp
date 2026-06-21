#include<iostream>
using namespace std;

class A
{
    public:
        virtual void f1() { cout<<"A - f1()";}
        void f3() { }
};
class B:public A 
{
    public:
        void f1() { cout<<"B - f1()"; }
        void f2() { }
};
int main()
{
    A *p=new B;

    p->f1(); //B

    cout<<endl;
    return 0;
}