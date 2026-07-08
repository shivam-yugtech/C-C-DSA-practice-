#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

void f1()
{
    array <int,5> a1={10,20,30,40,50};
    array <int,5>::reverse_iterator rit;
    for(rit=a1.rbegin();rit!=a1.rend();rit++)
        cout<<*rit<<" ";
    cout<<endl;

}
void f2()
{
    array <float,5> a1={10.4f,20.3f,30.8f,40.0f,50.7f};
    array<float,5>::iterator it;
    float Avg,sum=0;
    for(it=a1.begin();it!=a1.end();it++)
        sum=sum+*it;
    Avg=sum/a1.size();
    cout<<"Avg="<<Avg<<endl;
}
void f3()
{
    int temp;
    array <int,10> a1;
    cout<<"Enter 10 Elements: ";
    for(int i=0;i<=9;i++)
    {
        cin>>temp;
        a1[i]=temp;
    }
    cout<<"Greater element is "<<*max_element(a1.begin(),a1.end());    
    cout<<endl;
}
class Complex
{
    private:
        int a,b;
    public:
        Complex(int x,int y):a(x),b(y)
        {}
        void show()
        {
            cout<<"\na="<<a<<" b="<<b;
        }
        Complex operator+ (Complex c)
        {
            Complex temp(0,0);
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;

        } 
};
Complex sumComplex(array<Complex,5> a1)
{
    Complex C(0,0);
    for(auto x:a1)
        C=C+x;
    return C;
}
void f4()
{
    Complex sumComplex(array<Complex,5>);
    array <Complex,5> a1={
        Complex(2,3),
        Complex(-4,7),
        Complex(1,-2),
        Complex(8,0),
        Complex(4,4)
    };
    Complex C=sumComplex(a1);
    C.show();
    cout<<endl; 
}
void f5()
{
    array<int,10> a1={29,60,92,48,77,16,8,36,52,83};
    sort(a1.begin(),a1.end());
    for(auto x:a1)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    f5();
    cout<<endl;
    return 0;
}