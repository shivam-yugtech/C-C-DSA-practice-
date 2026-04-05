#include<stdio.h>
//----------------------------------
//TNRN
void add(); //function declaration 
int main()
{
    add();
    printf("\n");
    return 0;
}
void add() //TNRN
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}
//----------------------------------
//TSRN
void add(int,int); //function declaration 
int main()
{
    add(10,20);
    printf("\n");
    return 0;
}
void add(int a,int b) //TSRN
{
    int c;
    c=a+b;
    printf("Sum is %d",c);
}
//----------------------------------
//TNRS
int add(); //function declaration 
int main()
{
    int s;
    s=add();
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
int add() //TNRS
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
//----------------------------------
//TSRS
int add(int,int); //function declaration 
int main()
{
    int s;
    s=add(10,20);
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
int add(int a,int b) //TSRS
{
    int c;
    c=a+b;
    return c;
}
//----------------------------------