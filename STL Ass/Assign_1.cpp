#include<iostream>
using namespace std;

template <class x>
x big(x a, x b)
{
    if(a>b)
        return a;
    else 
        return b;
}
template <class x>
x small(x a, x b)
{
    if(a<b)
        return a;
    else 
        return b;
}
template <class x>
x print(x arr[],int n)
{
    for(int i=0;i<n-1;i++)
        cout<<arr[i]<<" ";
}
template <class x>
x sort(x arr[],int n)
{
    int t;
    for(int r=1;r<n-1;r++)
    {
        for(int i=0;i<n-1-r;i++)
        {
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
    }
}
template <class x>
x biginarr(int a[],int n)
{
    int G;
    for(i=0;i<n;i++)
        G=big(a[i],a[i+1]);
    return G;
}