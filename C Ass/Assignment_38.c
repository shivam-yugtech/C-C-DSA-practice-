#include<stdio.h>
#include<string.h>


int check_Palindrome(char str[])
{
    int i,l=strlen(str);
    for(i=0;i=l/2;i++)         //munnum = 6
    {
        if(str[i] != str[l-1-i])
            return 0;
    }
    return 1;
}
char* trim(char str[])
{
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--){
        count++;
    }
    k=strlen(str);
    while(str[i]==' ' && str[i]!='\0'){
        i++;
    }
    for(j=0;str[j+i];j++){
        str[j]=str[i+j];
    }
    str[k-count-i]='\0';
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
char* reverse_word_wise(char str[])
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
            k=-1;
        }
    }
    str[0]='\0';
    for(j=word_count-1;j>=0;j--)
    {
        if(str[0]!='\0')
            strcat(str," ");
        strcat(str,s[j]);
    }
    str[strlen(str)]='\0';
    return str;
}
int compare_case_ignore(char s1[], char s2[])
{
    int i;
    for(i=0;s1[i];i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]-=32;
    }
    for(i=0;s2[i];i++)
    {
        if(s2[i]>='a' && s2[i]<='z')
            s2[i]-=32;
    }
    for(i=0;s1[i] && s2[i];i++)
    {
        if(s1[i]!=s2[i]){   //not same
              return 0;
                }
        if(s1[i]==s2[i])
            return 1;   //same
        else   
            return 0;   //not same (different length string)
    }
}
int main()
{
    char str[]="   MySirG Education Services   ";
    printf("Number of words in the string is = %d ",count_word(str));
    return 0;
}



