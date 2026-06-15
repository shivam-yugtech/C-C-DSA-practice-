#include<iostream>
using namespace std;
class Complex
{
    private: 
        int a,b; 
    public:
        Complex() { a=0; b=0;}  // default constructor
        Complex(int x) { a=x; b=0;} // parameteraized constructor
        Complex(int x,int y) { a=x;  b=y;  } 
        Complex(Complex &C) { a=C.a; b=C.b;} // copy constructor
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
    Complex c1(3,4),c2(5,6),c3,c4(5);
    Complex c5=c1;
    
    c1.showData();
    c2.showData();

    //c3=c1+c2; Error: not supporting + for Complex type data
    //c3=c1.add(c2);
    c3.showData();
    cout<<endl;
    return 0;
}

