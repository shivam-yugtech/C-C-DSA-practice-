#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"real = "<<a<<"\nimainary = "<<b;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;

            return temp;
        }
        Complex sub(Complex C)
        {
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;

            return temp;
        }
        Complex multi(Complex C)
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=a*C.b+b*C.a;

            return temp;
        }
};

class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int hr,int min,int sec)
        {
            h=hr;
            m=min;
            s=sec;
        }
        void showTime()
        {
            cout<<h<<"hr "<<m<<"min "<<s<<"s ";
        }
        void normalize()
        {
            m+=s/60;
            s%=60;
            h+=m/60;
            m%=60;
        }
        Time add(Time t)
        {
            Time temp;
            temp.h=h+t.h;
            temp.m=m+t.m;
            temp.s=s+t.s;
            temp.normalize();
            return temp;
        }
        bool is_greater(Time t)
        {
            if(h>t.h)
                return true;
            else if(h<t.h)
                return false;
            else if(m>t.m)
                return true;
            else if(m<t.m)
                return false;
            else if(s>t.s)
                return true;
            else if(s>t.s)
                return false;
        }
};

class TestResult
{
    private:
        int roll_no, right, wrong, net_score;
        static int right_weightage, wrong_weightage;
    public:
        void setRoll_no(int r){ roll_no=r; }
        void setRight(int r){ right=r; }
        void setWrong(int w){ wrong=w; }
        void setNet_score(int n){ net_score=n; }
        static void setRight_weightage(int rw){ right_weightage=rw; }
        static void setWrong_weightage(int ww){ wrong_weightage=ww; }

        int getRoll_no(){ return roll_no; }
        int getRight(){ return right; }
        int getWrong(){ return wrong; }
        int getNet_score(){ return net_score; }
        static int getRight_weightage(){ return right_weightage; }
        static int getWrong_weightage(){ return wrong_weightage; }
};

int TestResult::right_weightage;
int TestResult::wrong_weightage;

void setTestResult(TestResult &t,int r,int right,int wrong)
{
    t.setRoll_no(r);
    t.setRight(right);
    t.setWrong(wrong);
    t.setNet_score(t.getRight()*TestResult::getRight_weightage()-t.getWrong()*TestResult::getWrong_weightage());
}
void sortNetScore(TestResult tr[],int size)
{
    TestResult temp;
    int r,i;
    for(r=1;i<size;i++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(tr[i].getNet_score()<tr[i+1].getNet_score())
            {
                temp=tr[i];
                tr[i]=tr[i+1];
                tr[i+1]=temp;
            }
        }
    }
}
void showTestResults(TestResult tr[],int size)
{
    cout<<endl;
    cout<<"---------------------------------------------";
    cout<<endl;
    cout<<"Roll no  Right  Wrong  NetScore";
    for(int i=0;i<5;i++)
    {
        cout<<endl;
        cout<<tr[i].getRoll_no()<<"  ";
        cout<<tr[i].getRight()<<"  ";
        cout<<tr[i].getWrong()<<"  ";
        cout<<tr[i].getNet_score()<<"  ";
    }
}
int main()
{
    int r,right,wrong;
    TestResult tr[5];
    TestResult::setRight_weightage(4);
    TestResult::setWrong_weightage(-1);
    for(int i=0;i<5;i++)
    {
        cout<<"Enter details for the test result "<<i+1;
        cout<<endl;
        cout<<"Enter rollno: ";
        cin>>r;
        cout<<"Enter number to the right answer: ";
        cin>>right;
        cout<<"Enter numbwer to the wrong answer: ";
        cin>>wrong;
        setTestResult(tr[i],r,right,wrong);
    }

    showTestResults(tr,5);
    sortNetScore(tr,5);
    cout<<endl;
    return 0;
}

class Matrix 
{
    private:
        int arr[3][3],a,b;
    public:
        void input()
        {
            cout<<"Enter 9 element in a row wise : ";
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cin>>arr[i][j];
                }
            }
        }
        void display()
        {
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cout<<arr[i][j]<<"  ";
                }
                cout<<endl;
            }
        }
        Matrix add(matrix m)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    temp.arr[i][j]=arr[i][j]+arr[i][j];
                }
            }
            return temp;
        }
        Matrix sub(matrix m)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    temp.arr[i][j]=arr[i][j]+arr[i][j];
                }
            }
            return temp;
        }
        Matrix mul(matrix m)
        {
            Matrix temp;
            int sum,k;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    for(k=0,sum=0;k<=2;k++)
                    {
                        sum+=arr[i][k]*m.arr[k][j];
                    }
                    temp.arr[i][j]=sum;
                }
            }
            return temp;
        }
        Matrix Transpose()
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    temp.arr[j][i]=arr[i][j];
                }
            }
            return temp;
        }
        bool is_singular()
        {
            int s;
            s=arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])-arr[0][1](arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
            if(s==0)
                return true;
            else    
                return false;
        }
};

