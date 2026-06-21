#include<iostream>
using namespace std;

class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int hr,int min,int sec)
        {
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }
        void showTime()
        {
            cout<<"\n"<<hr<<":"<<min<<":"<<sec;
        }
        void sethr(int h){  this->hr=h; }
        void setmin(int m){ this->min=m; }
        void setsec(int s){ this->sec=s; }
        int gethr(){ return hr; }
        int getmin(){ return min; }
        int getsec(){ return sec; }
        bool operator> (Time t)
        {
            if(hr>t.hr)
                return true;
            else if(hr<t.hr)
                return false;
            else if(min>t.min)
                return true;
            else if(min<t.min)
                return false;
            else if(hr>t.hr)
                return true;
            else
                return false;
        }
};
Time* getTimeArray(int size)
    {
    // Time *ptr = new Time[size];
    //   return ptr;
    return new Time[size];
    }
void sortArray(Time a[],int size)
{
    int r,i;
    Time temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
void setTimeArray(Time t[],int size)
{
    for(int i=0;i<size;i++)
        cout<<t[i].showTime();
}






