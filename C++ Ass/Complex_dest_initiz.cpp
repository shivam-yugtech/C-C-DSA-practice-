#include<iostream>
using namespace std;
class Complex
{
    private: 
        int a,b; 
        const int c;
        int &r;
    public:
        Complex():a(0),b(0),c(10),r(c) { }
        Complex(int x):a(x),b(0),c(10),r(c) { }
        Complex(int x,int y):a(x),b(y),c(10),r(c) { }
        //Complex(Complex &C) { a=C.a; b=C.b;}
        ~Complex(){ }
        void set_c(int x) {c=x;}
        void setData(int x,int y)  { a=x; b=y;  }
        void showData()   {cout<<"a="<<a<<" b="<<b<<endl; }
        /*
        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        */
};
int main()
{
    Complex c1=Complex(3,4),c2,c3; //we can write like this also 
    Complex c5=c1;                // c1={3,4},c1=Complex(3,4),c1(3,4)
    c1.set_c(10);
    c1.showData();
    c2.showData();

    //c3=c1+c2; Error: not supporting + for Complex type data
    //c3=c1.add(c2);
    c3.showData();
    cout<<endl;
    return 0;
}

