#include<iostream>
using namespace std;

// call by object by passing argument as object
// returnng object
class Complex
{
    private:
        int a,b;       
    public:
        void setData(int x,int y)    { a=x; b=y; }
        void DisplayData(); { cout<<"a ="<<a<<" b ="<<b<<endl; }
        Complex add(complex C)
        {
            Complex temp;
            temp.a = a+C.a;
            temp.b = b+C.b;
            return temp;
        }
};
int main()
{
    Complex C1,C2,C3;
    C1.setData(3,4);
    C2.setData(5,6);
    C1.DisplayData();
    C2.DisplayData();

    // C3=C1+C2;  ERROR: not supporting + for complex type data
    C3=C1.add(C2);
    C3.DisplayData();
    cout<<endl;
    return 0;
}


// class Complex
// {
//     private:
//         int a,b;       // Instance(object) member Variable
//     public:
//         void setData(int x,int y)   // x & y are local variable 
//         {
//             a=x;
//             b=y;
//         }
//          void DisplayData(); // declaration 
//         // {
//         //     cout<<" a = "<<a<<" b = "<<b<<endl;
//         // }
// };
// int main()
// {
//     Complex C1,C2;
//     C1.setData(3,4);
//     C1.DisplayData();
//     cout<<endl;
//     return 0;
// }
// we can also define Instance memeber function 
// outside of object/Instance but you have to declare in object 
void Complex::DisplayData()  // Complex:: -> membership label
        {                    // :: -> scope resolition operator
            cout<<" a = "<<a<<" b = "<<b<<endl;
        }
