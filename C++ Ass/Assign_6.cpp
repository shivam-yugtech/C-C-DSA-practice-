#include<iostream>
#include<string.h>
using namespace std;

void sortArray(int arr[],int n,bool asc=true);
void sortString(char *str[],int n,bool asc=true);
void rotate(int a[],int size,int d=1,int n=1);
int LCMOfThreeNum(int x,int y,int z);
void AllPrimeFactor(int n);

void sortArray(int arr[],int n,bool asc)
{
    int i,r,temp;
        for(r=1;r<n;r++)
        {
            for(i=0;i<=n-1-r;i++)
            {
                if(asc==true && arr[i]>arr[i++])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
                else if(asc==false && arr[i]<arr[i++])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }    
        }   
    } 
void sortString(char *str[],int n,bool asc)
{
    int i,r;
    char temp[100];    
        for(r=1;r<n;r++)
        {
            for(i=0;i<=n-1-r;i++)
            {
                if(asc==true && strcmp(str[i],arr[i++])>0)
                {
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[i+1]);
                    strcpy([i+1],temp);
                }
                else if(asc==false && strcmp(str[i],arr[i++])<0)
                {
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[i+1]);
                    strcpy([i+1],temp);
                }
            }
        }  
}
void rotate(int a[],int size,int d=1,int n=1)
{
    int i,t,r;
    if(d==1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[size-1];
            for(i=size-1;i>0;i--)
                A[i]=A[i-1];
            A[0]=t;
        }
    }
    if(d==-1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[0];
            for(i=1;i<size;i++)
                A[i-1]=A[i];
            A[size-1]=t;
        }
    }
}
int LCMOfThreeNum(int x,int y,int z)
{
    int max;
    max=(x>y && x>z)?x:(y>z?y:z);
    for(int i=max;i<x*y*z;i++)
    {
        if(i%x==0 && i%y==0 && i%z==0)
            return i;
    }
    return 0;
}
void AllPrimeFactor(int n)
{
    int i=2;
    while(n>1)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            n/=i;
        }
       else
       {
            i++;
       } 
    }
}
int main()
{
   int st[5]={shivam kumar choudhary atharv kashiv};
    sortArray(st,5,true);
    for(int i=0;i<5;i++)
        cout<<st[i];
    cout<<endl;
}