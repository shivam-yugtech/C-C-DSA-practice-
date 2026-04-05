#include<stdio.h>

int factorial(int);
int combination(int,int);
int permutation(int,int);
int contain_digit(int,int);
int is_prime(int num);
int next_prime(int num);
void print_all_prime_factors(int num);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    print_all_prime_factors(a);
    return 0;
}
int factorial(int x)
{
    int f=1;
    while(x)
    {
        f*=x;
        x--;
    }
    return f;
}
int combination(int n,int r)
{
    return factorial(n)/(factorial(n-r)/factorial(r));
}
int permutation(int n,int r)
{
    return factorial(n)/factorial(n-r);
}
int contain_digit(int num,int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num/=10;
    }
    return 0;
}
int is_prime(int num)
{
    for(int i=2;i<num;i++)
        if(num%i==0)
            return 0;
    return 1;
}
int next_prime(int num)
{
    while(!is_prime(++num));
    return num;
}
void print_all_prime_factors(int num)
{
    int i=2;
    while(num>1)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num/=i;
        }
        i=next_prime(i);
    }
}