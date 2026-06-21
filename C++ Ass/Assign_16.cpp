#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private:
        char name[30];
        int age;
    public:
        Person(char name[],int age)
        {
            strcpy(this->name,name);
            this->age=age;
        }
};

class Complex
{
    private:
        int a,b;
    public:
        void SetData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<"a="<<a<<" b="<<b;
        }
};
void f1()
{
    Complex *c = new Complex();
    c->SetData(3,4);
    c->showData();
}