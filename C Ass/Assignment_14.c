    #include<stdio.h>

int p1()
{
    int i=1,x,fact=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    do
    {
        fact*=i;
        i++;
    }while(i<=x);
    printf("factorial of %d! is %d",x,fact);
    return 0;
}
int p2()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    do
    {
        n/=10;
        count++;
    } while(n>0);
    printf("no. of digits are %d",count);
    return 0;
}
int p3()
{
    int n,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
   /* for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count=2)
        printf("Prime number");
    else
        printf("Not a Prime Number");  */
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("Prime number");
    else
        printf("Not a Prime Number"); 
}
int main()           
{
    int n,m,L;
    printf("Enter two number: ");
    scanf("%d%d",&n,&m);
    for(L=n>m?n:m;L<=n*m;L++)
    {
        if(L%n==0 && L%m==0)
        {
             printf("LCM is %d",L);
             break;
        }
    }
    return 0;
}
int p5()
{
    int n,m,x=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(;n;)
    {
        m=n%10;
     //   printf("%d",m);   //to directly print value
        n/=10;
        x*=10+m;    // to store value of reverse 
    }
    printf("reverse number is %d",x);
    return 0;
}
