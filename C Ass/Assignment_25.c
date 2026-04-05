#include<stdio.h>

// Recursion function 

void NNaturalNum(int n)
{
    if(n>0){
        NNaturalNum(n-1);
        printf("%d ",n);
    }
}
void NRev_NaturalNum(int n)      
{
    if(n>0){
        printf("%d ",n);
        NRev_NaturalNum(n-1);
    }
}
void NODDNaturalNum(int n)
{
    if(n>0){
        NODDNaturalNum(n-1);
        printf("%d ",2*n-1);
    }
    }

void NODD_REV_NaturalNum(int n)      
{
    if(n>0){
        printf("%d ",2*n-1);
        NODD_REV_NaturalNum(n-1);
    }
}
void N_EVEN_NaturalNum(int n)
{
    if(n>0){
        N_EVEN_NaturalNum(n-1);
        printf("%d ",2*n);
    }
}
