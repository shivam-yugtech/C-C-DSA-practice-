#include<stdio.h>

void NevenNum_rev(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        NevenNum_rev(n-1);
    }
}
void squareNNum(int n)
{
    if(n>0)
    {
        squareNNum(n-1);
        printf("%d ",n*n);
    }
}
void decimal_to_bianry(int n)
{
    if(n>0)
    {
        decimal_to_binary(n/2);
        printf("%d",n%2);    
    }
}
void decimal_to_octal(int n)
{
    if(n>0)
    {
        decimal_to_octal(n/8);
        printf("%d",n%8);
    }
}
void rev_num(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        rev_num(n/10);
    }
}
int main()
{
    int n;
    decimal_to_octal(456);

    return 0;
}