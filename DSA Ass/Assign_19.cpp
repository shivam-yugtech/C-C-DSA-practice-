#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
    int temp;
    for(int r=0;r<n;r++)
    {
        for(int i=0;i<n-r-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int ModifiedBubbleSort(int arr[],int n)
{
    bool swapped;
    for(int r=0;r<n;r++)
    {
        bool swapped=false;
        for(int i=0;i<n-r-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            return r;
    }
}
void InsertionSort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp<arr[j])
                arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=temp;
    }
}
int minValueIndex(int arr[],int n,int j)
{
    int i,min,minIndex;
    min=arr[j];
    minIndex=j;
    for(i=j+1;i<=n-1;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            minIndex=i;
        }
    }
    return minIndex;
}
void SelectionSort(int arr[],int n)
{
    int minIndex,i,temp;
    for(i=0;i<n-2;i++)
    {
        minIndex=minValueIndex(arr,n,i);
        swap(arr[i],arr[minIndex])
    }
}
int quick(int A[],int left,int right)
{
    int loc=left,t;
    while(left<right)
    {
        while(left<right && A[loc]<=A[right])
            right--;
        if(left==right)
            break;
        t=A[loc];
        A[loc]=A[right];
        A[right]=t;
        loc=right;
        while(left<right && A[left]<=loc)
            left++;
        if(left==right)
            break;
        t=A[left];
        A[left]=A[loc];
        A[loc]=left;
    }
    return loc;
}
void quicksort(int A[],int l,int u)
{
    int loc;
    loc=quick(A,l,u);
    if(loc>l+1)
        quicksort(A,l,loc-1);
    if(loc<u-1)
        quicksort(A,loc+1,u);
}
int main()
{
    int arr1[]={8,91};
    int r=ModifiedBubbleSort(arr1,2);
    for(int i=0;i<2;i++)
        cout<<arr1[i]<<" ";
    cout<<endl<<"r="<<r;
    cout<<endl;
    return 0;
}