#include<stdio.h>
#include<string.h>
void swap(int *p, int *q);
void convert_uppercase(char *str[]);

int main(){
    char str[20];
    printf("Enter a string: ");
    fgets(str,20,stdin);
    printf("string in uppercase is %s",convert_uppercase(&str[]));
    return 0;
}
void swap(int *p, int *q)
{
    int r;
    r  = *p;
    *p = *q;
    *q = r;
}
void convert_uppercase(char *str[])
{
    str=str-32;
}