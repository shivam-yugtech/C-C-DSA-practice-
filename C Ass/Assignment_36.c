#include<stdio.h>
#include<string.h>

int lengthString(char str[])
{
  //return strlen(str);
  int i;
  for(i=0;str[i];i++)
  return i; 
}

char * reversestring(char str[])
{
    int i,l=strlen(str);
    char ch
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    return str;
}

int comparestring(char str1[],char str2[])
{
   // return strcmp(str1,str2);
   int i;
   if(strlen(str1)!=strlen(str2))
        return 0;
    for(i=0;str1[i];i++)
    {
        if(str1[i]!=str2[i])
            return 0;
        return 1;
    }
}

char* transformToUpperCase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]<='A' && str[i]>='Z')
            str[i]=str[i]-32;
    }
    return str;
}

char* transformToLowerCase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]<='a' && str[i]>='z')
            str[i]=str[i]+32;
    }
    return str;
}

int main()
{
    int i;
    char str[20];
    printf("Enter a string:");
    fgets(str,20,stdin);
    /* -1 :- str1 comes before str2 in dictionary
        0 :- same
        1 :- str1 comes after str2 in dictionary
    */
    transformToLowerCase(str);
    return 0;
}