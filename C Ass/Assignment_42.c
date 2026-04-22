#include<stdio.h>
#include<string.h>
void swap(int *p, int *q);
void search_all_occurrences(char *str, char ch, int *arr);
char* convert_uppercase(char *str);
char* convert_lowercase(char *str);
void extract_string(char *str, int start_index, int end_index, char *result);

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

void search_all_occurrences(char *str, char ch, int *arr)
{
    int i,j;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[j]=i;
            j++;
        }
    }
}

char* convert_uppercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' || str[i]<='z')
            str[i]=str[i]-32;
    }
    return str;
}

char* convert_lowercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' || str[i]<='Z')
            str[i]=str[i]+32;
    }
    return str;
}

void extract_string(char *str, int start_index, int end_index, char *result)
{
    int i,j;
    int l;
    l=strlen(str);
    if(start_index>=0 && start_index < end_index && start_index<l)
    {
        if(end_index>l)
            end_index=l;
        for(i=start_index,j=0;i<end_index;i++,j++)
            result[j]=str[i]; 
        result[j]='\0';
    }
    else    
        result[0]='\0';
}