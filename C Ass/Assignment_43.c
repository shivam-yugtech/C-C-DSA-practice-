#include<stdio.h>
#include<string.h>

void swap_String(char *s1,char *s2)
{
    char s3[50];
    strcpy(s3,s1);
    strcpy(s1,s2);
    strcpy(s2,s3);         
}
void swap(int *p, int *q)
{
    int r;
    r  = *p;
    *p = *q;
    *q = r;
}
void sort(int *ptr,int size)
{
    int r,i;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                swap(&ptr[i],&ptr[i+1]);
            }
        }
    }
}
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size1 && j<size2;k++)
    {
        if(arr1[i]<arr[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

// 55 70 81 23 10 90 45 63 71 15 
// left=0  right=9  loc=0
int fun(int *arr, int size)
{
    int left,right,loc,temp;
    left=0;
    right=size-1;
    loc=0;

    while(left<right)
    {
        while(left<right && arr[loc]<arr[right])
            right--;
        if(left==right)
            break;
        temp=arr[right];
        arr[right]=arr[loc];
        arr[loc]=temp;
        loc=right;
        while(left<right && arr[left]<arr[loc])
            left++;
        if(left==right)
            break;
        temp=arr[left]
        arr[left]=arr[loc]
        arr[loc]=temp;
        loc=left;
    }
    return loc;
}
int highest_marks(int **p,int no_of_classes,int no_of_students[])
{
    int max,i,j;
    max=p[0][0];
    for(i=0;i<no_of_classes;i++)
    {
        for(j=0;j<no_of_students[i];j++)
        {
            if(max<p[i][j])
                max=p[i][j];    
        }
    }
    return max;
}
int main()
{
    int arr[10]={45,23,13,89,76,8,35,52,67,5},i;
    sort(arr,10);
    printf("after sorting Array: ");
    for(i=0;i<10;i++)
        printf(" %d ",arr[i]);
    return 0;
}