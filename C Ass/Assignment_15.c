#include<stdio.h>

void p1()
{
    int i,j;
    printf("prime no. below 100 is :");
    for(i=1;i<100;i++)
    {
        for(j=2;j<i;j++) 
        {
            if(i%j==0)
                break;
        } 
        if(j==i)
            printf("%d ",i);
    }

}
void p2()
{
    int i,n,m;
    printf("Enter two number in acending order : ");
    scanf("%d%d",&n,&m);
    for(n;n<=m;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(i==n)
            printf("%d ",n);
    }
    return 0;
}
void p3()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n++;
    while(1)
    {
        for(i=2;i<n;i++)
            if(n%i==0)
                break;
            if(i==n)
                break;
            n++;
    }
    printf("%d",n);
    return 0;
}
void p4()
{
    int a,b,H;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0 && b%H==0)
            break;
    }
        printf("HCF is %d",H);
}
void p5()
{
    int a,b,H;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0 && b%H==0)
            break;
    }
    if(H==1)    
         printf("Co-Prime");
    else
        printf("Not Co-Prime");
}
int main()
{
    p1();
    return 0;
}