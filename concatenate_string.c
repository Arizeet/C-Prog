#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50
int main()
{
    char str1[]="Arizeet", str2[]="Behera",str[N];
    int i=0,j=0;
    system("cls");
    while (str1[i]!='\0')
    {
        str[i]=str1[i];
        i++;
    }
    while (str[j]!='\0')
    {
        str[i]=str2[j];
        j++;
        i++;
    }
    puts(str);
    return 0;
}