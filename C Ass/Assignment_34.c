#include<stdio.h>
#include<string.h>

void occurenceCharInString()
{
    char str[50],ch;
    int count=0,i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter a charecter: ");
    fflush(stdin);                 // uses to flush out the input used before in fgets.  
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("%c occures %d times",ch,count);
    
}
void lengthString()
{
    char str[50];
    int i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++);
    printf("Length of sting \"%s\"is %d",str,i);
    printf("\n");

}
void countvowels()
{
    char str[50],v[]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
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
    printf("Number of vowels in the string \"%s\" is %d",str,count);
}

void countspaces()
{
    char str[30];
    int i,count=0;
    printf("Enter a string:");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("Number of spaces in the string \"%s\" is %d",str,count);
}

void lowercaseToUppercase()
{
    char str[50];
    int i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("String after converting lowercase to uppercase: %s",str);
}
int main()
{
    countvowels();

    return 0;
}
