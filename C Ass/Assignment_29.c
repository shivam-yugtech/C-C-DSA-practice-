#include<stdio.h>
void p1()
{
    int arr[10],i,s=0;
    printf("Enter numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    printf("%d",s);
}
void p2()
{
    int arr[10],i,s=0;
    float avg;
    printf("Enter numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    avg=s/10.0;
    printf("%.2f",avg);
    }
void p3()
{
    int arr[10],i,se=0,so=0;
    printf("enter number :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            se=se+arr[i];
        else    
            so=so+arr[i];
    }
    printf("%d",se);
    printf("\n%d",so);
}
void p4()
{
    int arr[10],i,G;
    printf("Enter no. in an array :");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
        G=arr[0];
        for(i=1;i<=9;i++)
        if(G<arr[i])
            G=arr[i];
    printf("Greatest number is %d",G);
}
void p5(){
    int arr[10],i,S;
    printf("Enter number in an array :");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    S=arr[0];
    for(i=1;i<=9;i++)
        if(S>arr[i])
            S=arr[i];
    printf("Smallest number is %d",S);
}
