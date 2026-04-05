#include<stdio.h>
#include<string.h>

void print_frequency(char str[])
{
    int f[128]={0},i;
    for(i=0;str[i];i++)
    {
        f[str[i]]++;
    }
    for(i=0;i<=127;i++)
    {
        if(f[i]!=0)
        {
            printf("%c - %d\n",i,f[i]);
        }
    }
}
int find_word_pattern(char str[],char word[])
{
    int i,j,l;          //mysirg Education Service // word- sir
    l=strlen(word);
    for(i=0;str[i+l-1];i++)
    {
        for(j=0;word[j];j++)        
        {
            if(str[i+j]!=word[j])
                break;
        }
        if(!word[j])
            return i;
    }
    return -1;
}
int find_word(char str[],char word[])
{
    int i,j,l;              
    l=strlen(word);
    for(i=0;str[i+l-1];i++)
    {
        for(j=0;word[j];j++)        
        {
            if(str[i+j]!=word[j])
                break;
        }
        if(!word[j])
            if(i==0 && (str[i+l]==' ' || str[i+l]=='\0') 
            || str[i-1] == ' ' && (str[i+l]==' '|| str[i+l]=='\0'))
                return i;
    }
    return -1;   
}
char* capitalize(char str[])
{
    int i=0;
    if(str[i]>='a' && str[i]<='z')
         str[i]-=32;
    for(i=1;str[i];i++)
    {
        if(str[i]==' ')
            if(str[i+1]!=0 && str[i+1]!=' ')
                if(str[i]>='a' && str[i]<='z')
                    str[i]-=32;
    }
    return str;
}
int count_word(char str[])
{
    int i,count=0;
    trim(str);
    for(i=0;str[i];i++)
    {
        if(str[i] == ' ')
        {
            if(str[i]==str[i+1])
                continue;
            else
                count++;
            }
    }
    return count+1;
}
char* accronym(char str[])
{
    int i,j,k,word_count;
    word_count=count_word(str);
    char s[word_count][50];
    for(i=0,j=0,k=0;str[i];i++,k++)
    {
        if(str[i]!=' ')
            s[j][k]=str[i];
        else
        {
            s[j][k]='\0';
            j++;
            k=-1;   //k=0
        }
    }
    s[j][k]='\0';
    str[0]='\0';
    for(k=1,i=0;k<word_count;k++,i++)
    {
        str[i]=s[k-1][0];
        if(str[i]<='a' && str[i]>='z')
            str[i]-=32;
        i++;
        str[i]' ';
    }
    strcpy(str+i,s[word_count-1]);
    return str;
}
char* concatenate(char s1[],char s2[])
{
    int i,j;
    i=strlen(s1);
    for(j=0;s2[j];j++){
        s1[i+j]=s2[i];
    }
    s1[i+j]='\0';
    return s1;

}
int main()
{
    char str[]="choudhary shivam kumar sanjeev";
    printf("string after captitalize = \n%s",capitalize(str));
    return 0;
}