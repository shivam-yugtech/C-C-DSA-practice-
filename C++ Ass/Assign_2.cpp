#include<iostream>
using namespace std;

void f1()
{
    cout<<"Hello MySirG";
}
void f2()
{
    cout<<"Hello"<<endl<<"MySirG";
}
void f3()
{
    int a,b;
    cout<<"Enter two Number: ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" + "<<b<<" is "<<a+b;
}
void f4()
{
    int r;
    float a;
    cout<<"Enter a Radius: ";
    cin>>r;
    a=3.14*r*r;
    cout<<"Area of Circle is "<<a;
}
void f5()
{
    int l,b,h;
    int v;
    cout<<"Enter Length,breadth & Heigth of a Cuboid: ";
    cin>>l>>b>>h;
    v=l*b*h;
    cout<<"Volume of a cuboid is "<<v;
}
int main()
{
    f5();
    cout<<endl;
    return 0; 
}