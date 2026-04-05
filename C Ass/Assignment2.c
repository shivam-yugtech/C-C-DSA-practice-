#include<stdio.h>

int main()
{
   /* int cp,sp,profit,loss;
    printf("Enter cost price of 1 banana is : ");
    scanf("%d",&cp);
    printf("Enter selling price of 1 banana is : ");
    scanf("%d",&sp);
    cp=25*cp;
    sp=25*sp;
    profit=sp-cp;
    loss=cp-sp;
    printf("Profit = %d",profit);
    printf("\nLoss = %d",loss);  */

    float cp,sp,profit;
    printf("Enter cp and sp of 12 bananas: ");
    scanf("%f%f",&cp,&sp);
    profit=(sp-cp)/12*25;
    printf("profit(+ve)/loss(-ve)= %f",profit);  
    return 0;
}

int p4()
{
    int l,b,h,V;
    printf("Enter length, breadth, height: ");
    scanf("%d%d%d",&l,&b,&h);
    V=l*b*h;
    printf("Volume of cuboid is %d",V);
    return 0;
}

int p3()
{
    int p,r,t;
    float si;
    printf("Enter princle, rate, time: ");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Simple intrest is %f",si);
    return 0;
}
int p2()
{
    int r;
    float cirf;
    printf("Enter radius: ");
    scanf("%d",&r);
    cirf=2*3.14*r;
    printf("circumference of a circle is %f",cirf);
    return 0;
}

int p1()
{
    int x,y,z;
    float A;
    printf("Enter numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    A=(x+y+z)/3.0;
    printf("Average of 3 numebr is %f",A);
    return 0;

}