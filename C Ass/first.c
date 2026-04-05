#include<stdio.h>

void bubble_sort(int a[],int x)
{
    int i,r,t;
    for(r=1;r<=x-1;r++)
    {
        for(i=0;i<=x-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
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
        printf(" - %d\n",count);
        i=j;
    }
    if(a[size-1]!=a[size-2])
        printf("%d - %d",a[size-1],1);
}
int main()
{
    int a[]={10,20,20,30,20,40,50,50,50};
    print_frequence(a,9);
    printf("\n");

    return 0;
}



