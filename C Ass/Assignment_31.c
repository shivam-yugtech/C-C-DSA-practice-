#include<stdio.h>
// int greatestNum(int,int)
// int smallestNum(int,int)


int greatestNum(int a[],int x)
{
    int i,G=a[0];
    for(i=0;i<=x;i++){
        if(G<a[i])
            G=a[i];
    }
    return G;
} 
int smallestNum(int a[],int x)
{
    int i,S=a[0];
    for(i=0;i<=x;i++){
        if(S>a[i])
            S=a[i];
    }
    return S;
}
void sorting(int a[],int x)
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
    // for(i=0;i<=x-1;i++)
    //     printf("%d ",a[i]);
}
void rotation(int a[],int size, int n, int d)
{
    int i,t;
    if(d== 1){
        while(n){
            t=a[size-1];
            for(i=size-2;i>=0;i--)
                a[i+1]=a[i];
            a[0]=t;
            n--;
        }
    }
    else if(d==-1){
        while(n){
            t=a[0];
            for(i=1;i<=size-1;i++)
                a[i-1]=a[i];
            a[size-1]=t;
            n--;
        }
    }
}
int adjacent_duplicate(int a[],int size){
    int i,t;
    for(i=0;i<=size-2;i++){
        if(a[i]==a[i+1]){
            return a[i];
        }
    }
}
 int main(){
    int b[7],i;
    printf("Enter values in array: ");
    for(i=0;i<=4;i++)
        scanf("%d",&b[i]);
    printf("%d",adjacent_duplicate(b,7));
    
    return 0;
}