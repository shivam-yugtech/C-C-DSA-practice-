#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;;

class Person
{
    private:
        char name[30];
        inr age;
    protected:
        void setname(char n[]){ strcpy(name,n);}
        void setage(int a){ age=a; }    
        char* getname() { return name; }
        int getage() { return age; }
};

class Employee: public Person
{
    private:
        float salary;
    public:
        void setEmployee(char n[],int a,float s)
        {
            setname(n); 
            setage(a);
            salary=s;
        }
        void showEmployee()
        {
            cout<<"name = "<<getname()<<"\nage = "<<getage()<<"\nsalary = "<<salary;
        }
};

class Circle
{
    private:
        int radius;
    public:
        void setRadius(int r){ radius=r; }
        int getRadius(){ return radius; }
        float getArea(){ return 3.14*radius*radius; }
};

class ThickCircle: public Circle
{
    private:
        int Thickness;
    public:
        void setThickness(int t){ Thickess=t; }
        int getThickness(){ return Thickness; }
        float getArea(){ return 3.14*(getRadius()+Thickness)*(getRadius()+Thickness)-3.14*getRadius()*getRadius(); }
};

class Coordinate
{
    private:
        int x,y;
    public:
        void setCoordinate(int x,int y){ this->x=x; this.y=y; }
        void showCoordinate(){ cout<<"\n("<<x<<","<<y<<")"; }
        double getDistance()
        {
            return sqrt(x*x+y*y);
        }
        double getDistance(Coordinate c)
        {
            return sqrt(x-c.x)*(x-c.x)+(y-c.y)*(y-c.y);
        }
};

class Shape
{
    private:
        char shapename[20];
    public:
        void setshapeName(char n[]){ strcpy(shapename,n) }
        char* getshapename(){ return shapename; }
};
class StraightLine:public Shape
{
    private:
        Coordinate c1,c2;
    public:
        void setline(Coordinate c1,Coordinate c2)
        {
            this->c1=c1;
            this->c2=c2;
        }
        double getDistance(){
            rerurn c1.getDistance(c2);
        }
        vod showline(){
            c1.showCoordinate();
            c2.showCoordinate();
        }
};