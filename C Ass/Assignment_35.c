#include<stdio.h>
#include<string.h>

void UppercaseToLowercase()
{
    char str[50];
    int i;
    printf("enter a number: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]>= 'A' && str[i] <= 'z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("string after converting uppercase to lowercase: %s",str);
}

void reverseString()
{
    char str[50],ch;
    int i,l;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);    
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("String After Reverse is %s",str);
}

void countCharacter()
{
    char str[20];
    int i,countAlp=0,countDig=0,countSpecial=0;
    printf("Enter a string: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]>= 'A' && str[i]<= 'Z' || str[i]>= 'a' && str[i]<= 'z')
            countAlp++;
        else if(str[i]>= '0' && str[i]<= '9')
            countDig++;
        else    
            countSpecial++;
    }
    printf("Alphabets = %d\n Digits = %d\n Special = %d",countAlp,countDig,countSpecial);
}
void copyString()
{
    char str1[20],str2[20];
    int i;
    printf("Enter a string: ");
    fgets(str1,20,stdin);
    str1[strlen(str1)-1]='\0';
    // strcpy(str2,str1);
    for(i=0;str1[i];i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("copied string is %s",str2);
}
void occuranceChar()
{
    char str[50],ch;
    int i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter a character: ");
    fflush(stdin);
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            printf("Character found at index %d",i);
            break;
        }
    }
    if(str[i]=='\0')
        printf("Character not found");
}
int main()
{
    occuranceChar();
    return 0;
}