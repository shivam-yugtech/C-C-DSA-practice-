#include<iostream>
#include<string.h>
using namespace std;

class A
{
    private:
        int a,b;
    public:
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<"\na="<<a<<"\bb="<<b;
        }
        void input()
        {
            cout<<"Enter a and b: ";
            cin>>a>>b;
        }
};

class B:public A
{
    private:
        int c;
    public:
        void input()
        {
            int x,y;
            cout<<"Enter a,b & c: ";
            cin>>x>>y>>c;
            setData(x,y);
        }
        void showData()
        {
            A::showData();
            cout<<" c="<<c;
        }
};

class Shape
{
    char shapeName[20];
    public:
        void setShapeName(char sn[])
        {
            strcpy(shapeName,sn);
        }
        char* getshowName()
        {
            return shapeName;
        }
        virtual float area()=0;    
};

class Rectangle:public Shape
{
    private:
        int l,b;
    public:
        void setLength(int l){ this->l=l; }
        void setBreadth(int b){ this->b=b; }
        int getLength(){return l;}
        int getBreadth(){return b;} 
        int area(){ return l*b; }
};

class Square:public Shape
{
    private: 
        int side;
    public:
        void setSide(int s){ side=s }
        int getSide(){ return side; }
        int area(){ return side*side; }
};
int main()
{
    Rectangle *r1=new Rectangle();
    Square *s1=new Square();
    char n1[]="Rectangle",n2[]="Square";
    // r1->setShapeName("Rectangle"); 
    r1->setShapeName(n1);
    r1->setLength(20);
    r1->setBreadth(8);
    cout<<"\nArea of rectangle is :"<<r1->area();
    // s1->shapeName("Square");
    s1->shapeName(n2);
    s1->setSide(10);
    cout<<"\nArea of Square is :"<<s1->area();
    cout<<endl;
    return 0;
}