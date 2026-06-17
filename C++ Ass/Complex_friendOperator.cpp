#include<iostream>
using namespace std;
class Complex
{
    private: 
        int a,b; 
    public:
        void setData(int x,int y)  { a=x; b=y;  }
        void showData()   {cout<<"a="<<a<<" b="<<b<<endl; }
        
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex);
        Complex operator+(int k)
        {
            Complex temp;
            temp.a=a+k;
            temp.b=b;
            return temp;
        }
        friend Complex operator+(int,Complex);
        friend ostream& operator<<(ostream &,Complex);
        friend istream& operator>>(istream &,Complex &);
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}
Complex operator+(int k,Complex X)
{
    Complex temp;
    temp.a=k+X.a;
    temp.b=X.b;
    return temp;
}
ostream& operator<<(ostream &dout,Complex X)
{
    dout<<"a="<<X.a<<" b="<<X.b<<" ";
    return dout;
}
istream& operator>>(istream &din,Complex &X)
{
    din>>X.a>>X.b;
    return din;
}
int main()
{
    Complex c1,c2,c3,c4; 
    cout<<"Enter two complex numbers";
    cin>>c1>>c2; 
    cout<<c1<<c2;

    c3=c1+c2; 
    //c3=operator+(c1,c2); //Correct
    c3=5+c1;
    c3.showData();
    c4=-c1; //c4=operator-(c1);
    c4.showData();
    cout<<endl;
    return 0;
}

