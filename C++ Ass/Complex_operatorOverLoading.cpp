#include<iostream>
using namespace std;
class Complex
{
    private: 
        int a,b; 
    public:
        void setData(int x,int y)  { a=x; b=y;  }
        void showData()   {cout<<"a="<<a<<" b="<<b<<endl; }
        
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator-()
        {
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }
};
int main()
{
    Complex c1,c2,c3,c4;  
    c1.setData(3,4);
    c2.setData(5,6);
    c1.showData();
    c2.showData();

    c3=c1+c2; 
    //c3=c1.operator+(c2); //Correct
    c3.showData();
    c4=-c1; //c4=c1.operator-();
    c4.showData();
    cout<<endl;
    return 0;
}

