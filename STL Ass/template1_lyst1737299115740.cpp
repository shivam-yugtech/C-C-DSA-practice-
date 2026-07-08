#include<iostream>
using namespace std;

template <class X>
X big(X a,X b)
{
    if(a>b)
        return a;
    else
        return b;
}
class Item
{
    private:
        int x,y;
    public:
        Item(int m,int n):x(m),y(n){}
        void showItem(){ cout<<"x="<<x<<" y="<<y<<endl;}
        bool operator>(const Item &i){
            if(x+y > i.x+i.y)
                return true;
            else
                return false;
        }
};
int main()
{
    cout<<big(10,20)<<endl;
    cout<<big(3.4,2.5)<<endl;
    Item i1(4,5), i2(6,10);
    Item i3=big(i1,i2);
    i3.showItem();
    return 0;

}
