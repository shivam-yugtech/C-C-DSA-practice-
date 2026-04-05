#include<stdio.h>
void p1()
{
    int i,a=-1,b=1,c,n;
    printf("Enter Nth number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d ",c);
}
void p2()
{
    int i,a=-1,b=1,c,n;
    printf("Enter number in N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
void p3()
{
    int i,a=-1,b=1,c,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while((a+b)<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(a+b==n)
        printf("%d is in Fibonacci Series ",n);
    else
        printf("Not in the Fibonacci Series");
}
void p4()
{
    int x,digits=0,y,r,p,i,s=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x;
    while(y)
    {
        y/=10;
        digits++;
    }
    y=x;
    while(y)
    {
        r=y%10;
        y/=10;
        // calculate r power digits
        for(i=1,p=1;i<=digits;i++)
            p=p*r;
        s=s+p;
    }
    if(s==x)
        printf("Armstrong number");
    else
        printf("Not a Armstrong number");
}
void p5()
{
    int x,digits,y,r,p,i,s=0;
    for(x=1;x<=1000;x++)
    {
    digits=0; 
    y=x;
    while(y)
    {
        y/=10;
        digits++;
    }
    y=x;
    s=0;
    while(y)
    {
        r=y%10;
        y/=10;
        // calculate r power digits
        for(i=1,p=1;i<=digits;i++)
            p=p*r;
        s=s+p;
    }
    if(s==x)
        printf("%d ",x);
   
    }
}
int main()
{
    p5();
    return 0;
}