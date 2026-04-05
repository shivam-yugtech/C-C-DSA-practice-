#include<stdio.h>

int p1()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0)
        printf("positive");
    else if(x<0)
        printf("negative");
    else
        printf("zero");
        return 0;
}
int p2()
{
    char c;
    printf("Enter a chacracter: ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
        printf("uppercase alphabet");
    else if(c>='a' && c<='z')
        printf("lowercase alphabet");
    else if(c>='0' && c<='9')
        printf("digit");
    else
        printf("special character");
        return 0;
}
int p3()
{
    int s1,s2,s3;
    printf("Enter sides of a trianle : ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>0 && s2>0 && s3>0 && s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
        printf("it's a triangle");
    else
        printf("not a triangle");
        return 0;
}
int main()
{
    int month_num;
    printf("Enter month number: ");
    scanf("%d",&month_num);
    if(month_num==4 || month_num==6 || month_num==9 || month_num==11)
        printf("no. of days in month %d is 30",month_num);
    else if(month_num==2)
        printf("no. of days in month %d is 28 or 29",month_num);
    else if(month_num<1 || month_num>12)
        printf("Invalid month number");
    else
        printf("no. of days in month %d is 31",month_num);
    return 0;
}
