#include<stdio.h>
#include<string.h>

void inputString(char str[][20],int n)
{
    int i,l;
    for(i=0;i<n;i++)
    {
        fgets(str[i],20,stdin);
        l=strlen(str[i]);
        str[i][l-1]='\0';   
    }
}
void count_vowel(char str[][20],int n)
{
    char v[]="aeiouAEIOU";
    int i,j,k,count;
    inputString(str,n);
    for(i=0;i<n;i++){
        for(j=0,count=0;str[i][j];j++){
            for(k=0;v[k];k++){
                if(str[i][j]==v[k]){
                    count++;
                    break;
                }
            }
        }
        printf("Vowels in %s are %d\n",str[i],count);
    }
}
void sortCities()
{
    int r,i;
    char temp[20];
    char cities[10][20];
    inputString(cities,10);

    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(strcmp(cities[i],cities[i+1])>0)
            {
                strcpy(temp,cities[i]);
                strcpy(cities[i],cities[i+1]);
                strcpy(cities[i+1],temp);  
            }
        }
    }
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
int splitWordfromStrings(char str[], char s[][20],int n)
{
    int no_of_words,i,j=-1,k;
    no_of_words=count_word(str);
    if(no_of_words<=n)
    {
        for(i=0;i<no_of_words;i++)
        {
            for(j++,k=0;str[j]!=' ' && str[j]!='\0';j++,k++)
            {
                s[i][k]=str[j];
            }
            s[i][k]='\0';
        }
    }
    return no_of_words;
}
// int remove_duplicate(char s[][20],int n)
// {
//     int i,j,k=0;
//     char temp[n][20];
//     sort(s,n);
//     strcpy(temp[k],s[0]);
//     for(i=0;i<n-1;)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(strcmp(s[i],s[j])==0)
//                 continue;
//             else
//             {
//                 i=j;
//                 k++;    
//                 strcpy(temp[k],s[j]);
//                 break;
//             }
//         }
//         if(j==n)
//             break;
//     }
//     for(i=0;i<=k;i++)
//         strcpy(s[i],temp[i]);
    
//     return k+1;
// }