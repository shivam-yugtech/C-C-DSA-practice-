#include<stdio.h>
#include<string.h>

int countvowels(char str[])
{
    char v[]="aeiouAEIOU";
    int count,i,j;
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
        {
        if(str[i]==v[j])
        {
            count++;
            break;
        }
    }
    }
    return count;
}

int find_character_indexof(char str[],char ch)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
        else
            return -1;
    }
}

int find_character_indexof_between(char str[],char ch,int startIndex,int endIndex)
{
    int i;
    for(i=startIndex;str[i] && i<endIndex;i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
        else
            return -1;
    }
}
char* swapCharacter(char str[], char i, char j)
{
    char z;
    if(i<strlen(str) && j<strlen(str))
    {
        z=i;
        i=j;
        j=z;
    }
    return str;
}

int checkAlphanumeric(char str[])
{
    int i,alpha=0,digit=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            alpha=1;
        else if(str[i]>='A' && str[i]<='Z')  
            alpha=1;   
        else if(str[i]>='0' && str[i]<='9')
            digit=1;
    }
        if(alpha && digit)
        {
            return 1;
        }
        else
            return 0;
}


int main()
{
    char str[]="shivam23";
    int x;
    x=checkAlphanumeric(str);
    printf("character find in the index  %d",x);
    return 0;
}