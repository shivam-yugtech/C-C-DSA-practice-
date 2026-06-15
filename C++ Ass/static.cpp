#include<iostream>
using namespace std;

class Item
{
    private:
        int a,b; // Instance member variable
        static int k; // static member variable | class variable
    public:
        void set_a(int x) { a=x;} //imf
        void set_b(int y) { b=y;} //imf
        int get_a() { return a;} //imf
        int get_b() { return b;} //imf
        static void set_k(int m) { k=m;} //smf
        static get_k() { return k;} //smf
};
int Item:: k; // k=0
int main()
{
    item i1,i2;
    i1.set_a(5);
   // i1.set_k(10);
    Item::set_k(10);
   // Item::k=10
    cout<<i2.get_a()<<" ";
    cout<<i2.get_b()<<" ";
    // cout<<i2.get_k()<<" ";
    cout<<Item::get_k()<<" ";
  //  cout<<Item::k<<" ";
}

/*
int* f1()
{
    int x=0;
    static int y;
    x++;
    y++;
    cout<<"x = "<<x<<"  y = "<<y<<endl;
    return &y;
}
int main(){
    int *ptr;
    ptr=f1();
    cout<<"In main: y="<<*ptr<<endl;
    ptr=f1();
    cout<<"In main: y="<<*ptr<<endl;
    ptr=f1();
    cout<<"In main: y="<<*ptr<<endl;
    cout<<endl;
    return 0;
}
    */