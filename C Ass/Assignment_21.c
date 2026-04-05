#include<stdio.h>
float Area_of_circle(int);
float SI(int,int,float);
int Even_Odd(int);
void Natural_num(int);
void Odd_Natural_num(int);

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("%d", Even_Odd(a));
    return 0;
}
float Area_of_circle(int r)
{
    return 3.14*r*r;
}
float SI(int p,int y,float r)
{
    return p*r*y/100;
}
int Even_Odd(int x)
{
    return x%2==0;
}
void Natural_num(int x)
{
    int i;
    for(i=1;i<=x;i++)
        printf("%d ",i);
}
void Odd_Natural_num(int x)
{
    int i;
    for(i=1;i<=x;i++)
        printf("%d ",2*i-1);
}