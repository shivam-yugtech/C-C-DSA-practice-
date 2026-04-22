#include<stdio.h>
#include<string.h>
#include "./Assignment_40.c"

void wordEnding_s(char str[], char s[][20], int n)
{
    int i,j,no_of_words;
    char temp[100][20];  
    no_of_words=splitWordfromStrings(str,temp,strlen(str));
    for(i=0,j=0;i<no_of_words;i++)
    {
        if(temp[i][strlen(temp[i])-1]=='s')
        {
            strcpy(s[j],temp[i]);
            j++;
        }   
    }
    for(i=0;i<j;i++)
        printf("\n%s",s[i]);
}
char maxFreqCharacter(char s[][20],int n)
{
    int freq[256]={0};
    int i,j,max;
    char ch;
    for(i=0;i<n;i++)
    {
        for(j=0;s[i][j];j++)
        {
            freq[s[i][j]]++;
        }
    }
    max=freq[0];
    ch=0;
    for(i=1;i<256;i++)
    {
        if(max<freq[i])
        {
            max=freq[i];
            ch=i;
        }
    }
    return ch;
}
int isAnagram(char s1[],char s2[]){
    int f1[256]={0},f2[256]={0};
    int i;
    for(i=0;s1[i];i++)
        f1[s1[i]]++;
    for(i=0;s2[i];i++)
        f2[s2[i]]++;
    for(i=0;i<256;i++)
        if(f1[i]!=f2[i])
            return 0;
    return 1;
}
void wordStarting_a(char str[], char s[][20],int n)
{
    char temp[100][20];
    int i,j,no_of_words;
    no_of_words=splitWordfromStrings(str,temp,strlen(str));
    for(i=0,j=0;i<no_of_words;i++)
    {
        if(temp[i][0]=='a'||temp[i][0]=='A')
        {
            strcpy(s[j],temp[i]);
            j++;
        }
    }
    for(i=0;i<j;i++)
        printf("\n%s",s[i]);
}
int countGmail(char s[][50],int n)
{
    char text="@gmail.com";
    int i,j,k,count=0;
    for(i=0;i<n;i++)
    {
        if(strlen(s[i])>10)
        {
            for(j=strlen(s[i])-10,k=0;s[i][j];j++,k++)
                if(text[k]!==s[i][j])
                    break;
            if(!text[k])
                count++;
        }
    }
    return count;
}
int main()
{
    char str[]="mysirg education services and this is a learning platform for students ALLERT";
    char s[20][20];
    wordStarting_a(str,s,strlen(str));
    
    return 0;
}