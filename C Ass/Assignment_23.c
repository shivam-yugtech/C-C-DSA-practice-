#include<stdio.h>
int LCM(int,int);
int HCF(int,int);
int check_prime(int);
int next_prime(int);
void print_N_primeNum(int);


int LCM(int x,int y)
{
    int L;
    for(L=x>y?x:y;L<=x*y;L++)
    {
        if(L%x==0 && L%y==0)
            return L;
    }
}
int HCF(int x,int y)
{
    int H;
    for(H=x<y?x:y;H>=1;H--)
        if(x%H==0 && y%H==0)
            return H;
}
int check_prime(int x)
{
    int i;
    for(i=2;i<x;i++)
        if(x%i==0)
            return 0;
    return 1;
}
int next_prime(int x)
{
    while(!check_prime(++x));
    return x;
}
void print_N_primeNum(int N)
{
    int i=2;
    while(N)
    {
        printf("%d ",i);
        i=next_prime(i);
        N--;
    }
    
}
