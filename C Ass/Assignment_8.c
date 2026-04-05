#include<stdio.h>

int p1()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>=100 && x<=999)
        printf("three digit number");
    else    
        printf("not a three digit number");
    return 0;    
}
int p2()
{
    int x,y;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);
    if(x>=y)
        printf("%d",x);
    else    
        printf("%d",y);        
}
int p3()
{
    int D,a,b,c;
    printf("Enter a,b,c of an quadretic equation : ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
        printf("Roots are Real and Distinct");
    else if(D==0)
        printf("Roots are Real and Equal");
    else    
        printf("Roots are imaginary");
}
int p4()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0)
        printf("its Leap year");
    else
        printf("Not a Leap year");
    }
    else{
        if(year%4==0)
            printf("its Leap year");
    else
        printf("Not a Leap year");
    }
}

int main()
{
    int x,y,z;
    printf("Entwer three no.'s: ");
    scanf("%d%d%d",&x,&y,&z);
    if(x>=y)
        printf("%d is greater",x);
    else if(y>=z)
        printf("%d is greater",y);
    else if(z>=x)
        printf("%d is greater",z);
        return 0;
}
