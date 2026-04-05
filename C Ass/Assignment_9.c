#include<stdio.h>

int p1()
{
    float CP,SP,per_profit,per_loss;
    printf("Enter CP and SP of an amount: ");
    scanf("%f%f",&CP,&SP);
    per_profit=(SP-CP)/CP*100;
    per_loss=(CP-SP)/CP*100;
    if(SP>=CP)
        printf("profit and profit percentage is %.2f%%",per_profit);
    else
        printf("Loss and Loss percentage is %.2f%%",per_loss);
}
int p2()
{
    int M,P,C,S,E,total;
    float percentage;
    printf("\tEnter marks : \n");
    printf("Maths = ");
        scanf("%d",&M);
    printf("Physics = ");
        scanf("%d",&P);
    printf("Chemistry = ");
        scanf("%d",&C);
    printf("Sanskrit = ");
        scanf("%d",&S);
    printf("English = ");
        scanf("%d",&E);
    total=M+P+C+S+E;
    percentage=total*100/500;
    if(M>=33 && P>=33 && C>=33 && S>=33 && E>33)
    {
        printf("Pass\n");
        printf("Total marks =%d ",total);
        printf("\npercentage is %.2f%%",percentage);
    }
    else
    {
        printf("Fail\n");
        
    }
        return 0;
}
int p3()
{
    char x;
    printf("Enter a alphabet :");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
        printf("uppercase");
    if(x>='a' && x<='z')
        printf("lowercase");
}
int p4()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
        printf("%d is divisible by 3 and 2",x);
    else
        printf("%d is not divisible by 3 and 2",x);
}
int p5()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
        printf("%d is divisible by 7 or 3",x);
    else
        printf("%d is not divisible by 7 or 3",x);   
} 