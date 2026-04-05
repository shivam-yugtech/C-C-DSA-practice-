#include<stdio.h>

void p1(){
    int a[10],i,t,r;
    printf("Enter numbers in array: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++){
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
}
void p2(){
    int a[10],i,t,r;
    printf("Enter a numbers in array");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=2;r++){
        for(i=0;i<=9-r;i++){
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    printf("2nd largest value is: %d",a[8]);
}
void p3(){
    int a[10],i,t,r;
    printf("Enter a numbers in array");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=2;r++){
        for(i=0;i<=9-r;i++){
            if(a[i]<a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    printf("2nd Smallest value is: %d",a[8]);
}
void p4(){
    int a[10],i,t,r;
    printf("Enter a numbers in array");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=9;r++){
        for(i=0;i<=9-r;i++){
            if(a[i]<a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
}
void p5()
{
    int a[10],i,b[10];
    printf("Enter a numbers in an array : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        b[i]=a[i];
    for(i=0;i<=9;i++)
    ptintf("%d "b[i]);
}








