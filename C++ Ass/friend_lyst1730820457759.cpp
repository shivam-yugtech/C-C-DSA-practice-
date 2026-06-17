#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a,b;
        friend void f1(A,B);
    public:
        void setData(int x,int y){ a=x; b=y;}
        void showData() { cout<<"a="<<a<<" b="<<b<<endl;}
        
};
class B
{
    private:
        int a,b;
        friend void f1(A,B);
    public:
        void setData(int x,int y){ a=x; b=y;}
        void showData() { cout<<"a="<<a<<" b="<<b<<endl;}
        
};
void f1(A o1,B o2)
{
    cout<<o1.a<<o1.b;
    cout<<o2.a<<o2.b;
}
int main()
{
    A obj1;
    B obj2;
    f1(obj1,obj2);
    cout<<endl;
    return 0;
}