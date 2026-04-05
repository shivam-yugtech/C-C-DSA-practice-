#include<stdio.h>

void swap_array_elements(int a[],int index1,int index2)
{
    int t;
    t=a[index1];
    a[index1]=a[index2];
    a[index2]=t;
}
void bubble_sort(int a[],int x)
{
    int i,r,t;
    for(r=1;r<=x-1;r++)
    {
        for(i=0;i<=x-r;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
}
int count_duplicate(int a[],int size)
{
    int i,j,count=0;
    bubble_sort(a,size);
    for(i=0;i<size-1;)
    {
        j=i+1;
        if(a[i]==a[j])
        {
            count++;
            do{
                j++;
                if(j>size-1)
                break;
            }while (a[i]==a[j]);   
        }
        i=j;
    }
    return count;
}
void print_unique(int a[],int size)
{
    int i,j,count=0;
    bubble_sort(a,size);
    for(i=0;i<size-1;)          //or (i=size-1)
    {
        printf("%d ",a[i]);
        j=i+1;
        if(a[i]==a[j])
        {
            count++;
            do{
                j++;
                if(j>size-1)
                break;
            }while (a[i]==a[j]);   
        }
        i=j;
    }
    // if(a[size-1]!=a[size-2])            //if ☝️ then don't need to write this <-
    //     printf("%d",a[size-1]);
}
//merge array in decending order.
void merge(int a[],int b[],int size,int c[])
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size && j<size;k++)
    {
        if(a[i]>b[i])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    while(i<size)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<size)
    {
        c[k]=b[j];
        j++;
        k++;
    }
}
void print_frequence(int a[],int size)
{
    int i,j,count=0;
    bubble_sort(a,size);
    for(i=0;i<size-1;)
    {
        printf("%d ",a[i]);
        j=i+1;
        if(a[i]==a[j])
        {
            count++;
            do{
                j++;
                if(j>size-1)
                    break;
            }while(a[i]==a[j]);   
        }
        printf(" - %d\n",j-i);
        i=j;
    }
    if(a[size-1]!=a[size-2])
        printf("%d - %d",a[size-1],1);
}
int main()
{
    int a[]={90,80,90,60,50,40,50,20,10,20};
    print_frequence(a,8);
    
    printf("\n");

    return 0;
}