#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    printf("x=%d and Y=%d",x,y);
    x=x+y - (y=x); 
    printf("\nx=%d and Y=%d",x,y);
    return 0;
}

int p7()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    printf("x=%d and Y=%d",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("\nx=%d and Y=%d",x,y);
    return 0;
}

int p6()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    printf("x=%d and Y=%d",x,y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("\nx=%d and Y=%d",x,y);
    return 0;
}

int p5()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    printf("x=%d and Y=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nx=%d and Y=%d",x,y);
    return 0;
}

int p4()
{
    int a,b,c;
    printf("Enter values in a,b: ");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\na=%d and b=%d",a,b);
    return 0;
}

int p3()
{
    char x='A';
    x++;
    printf("%c",x);
    return 0;
}

int p2()
{
   double a,b;
   printf("Enter a real constant: ");
   scanf("%lf",&a);
   b=sizeof(a);
   printf("Size of real constant is %lf",b);
   return 0; 
}

int p1()
{
    int a,b;
    printf("Enter a character: ");
    scanf("%d",&a);
    b=sizeof(a);
    printf("Size of a character is %d",b);
    return 0;
}