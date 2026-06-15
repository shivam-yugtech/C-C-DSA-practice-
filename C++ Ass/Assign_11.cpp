#include<iostream>
using namespace std;

class Numbers
{
    private:
        int size;
        int *arr;
    public:
        Numbers(int s)
        {
            size=s;
            arr=new int[size];
        }
        ~Numbers()
        {
            delete []arr;
        }
        Numbers(Numbers &n)
        {
            size=n.size;
            arr=new int[size];
            for(int i=0;i<size;i++)
                arr[i]=n.arr[i];
        }
};

class Student
{
    private:
        int roll_no;
        char name[20];
        int classs;
        char section;
    public:
        Student()
        {
            cout<<"Enter roll no : ";
            cin>>roll_no;
            cout<<"Enetr Name : ";
            cin.ignore();
            cin.getline(name,20);
            cout<<"Eneter your class: ";
            cin>>classs;
            cout<<"Enter section: ";
            cin>>section;
        }
        void display()
        {
            cout<<endl<<roll_no<<" "<<name<<" "<<classs<<" "<<section<<" ";
        }

};

class Date
{
    private:
        int d,m,y;
    public:
        Date():d(12),m(04),(2002)
        {}
        date(int d,int m,int y):d(d),m(m),y(y)
        {}
};

class Room
{
    private:
        int room_no;
        int room_type;
        bool is_AC;
        double price;
    public:
        Room(int rno,int rtype,bool ac,double p)
        {
            room_no=rno;
            room_type=rtype;
            is_AC=ac;
            price=p;
        }
};

class Circle
{
    private:
        int r;
    public:
        Circle()
        {
            r=1;
        }
        Circle(int rad)
        {
            r=rad;
        }
};