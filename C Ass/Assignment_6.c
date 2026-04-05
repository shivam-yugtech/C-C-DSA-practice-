#include<stdio.h>

int main()
{
    int p3,p4,p5;
    p3=10>8>4;
    p4=!2>-2;
    p5=3<0 && 5>0;
    printf("x=%d \nx=%d \nx=%d",p3,p4,p5);
}

int p2()
{
    int x;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    x=x%10*100+x/10;
    printf("number after rotating by 1 position is  %d",x);
    return 0; 

}

int p1()
{
    float rups,usd;
    printf("Enter rupees :" );
    scanf("%f",&rups);
    usd=rups/84.23;
    printf("usd of INR %f is %.2f USD",rups,usd);
    return 0;
}