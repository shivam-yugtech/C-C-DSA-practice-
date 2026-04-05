#include<stdio.h>

int p1()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int p2()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(6-j<=i)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int p3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int p4()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i<=j)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int p5()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",j);
            else    
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int p6()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=i;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",k--);
            else    
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int p7()
{
    int i,j;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=5;j++)
        {
            if(i<=j)
                printf("%c",ch++);
            else    
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int p8()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d ",k++);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
int p9()
{
    int i,j;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A'+i-1;
        for(j=1;j<=5;j++)
        {
            if(i<=j)
            {
                printf("%c",ch++);
                
            }
            else    
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int p10()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1||j==5)
                printf("* ");
            else    
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}