#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void PrintSubString(char str[],int startIndex,int endIndex=-1);

int HCF(int x,int y)
{
    int h;
    for(h=x<y?x:y;h>=1;h--)
    {
        if(x%h==0 && y%h==0)
            return h;
    }
    return 1        ;
}
float volume(int l,int b,int h)
{
    return l*b*h;
}
float volume(int r,int h)
{
    return (1/3)*3.14*r*r*h;
}
float volume(int r)
{
    return (4/3)*3.14*r*r*r;
}
void PrintSubString(char str[],int startIndex,int endIndex)
{
    if(endIndex == -1)
        endIndex=strlen(str);
    for(int i=startIndex;i<endIndex;i++)
        count<<str[i];
}
void swapArray(int arr1[],int n,int arr2[])
{
    int t;
    for(int i=0;i<n;i++){
        t=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=t;
    }
}
void mergeArray(int arr1[],int n,int arr2[])
{
    int *arr=(int*)malloc(2*size*sizeof(int));
    int i,j,k;
    for(i=0,j=0,k=0;i<n && j<n;k++)
    {
        if(arr1[i]<arr2[j])
        {  
            arr[k]=arr1[i];
            i++;
        }    
        else
        {
            arr[k]=arr2[j];
            j++;
        }    
    }
    while(i<n)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n)
    {
        arr[k]=arr2[j]
        j++;
        k++; 
    }
    return arr;
}