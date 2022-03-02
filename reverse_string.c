#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50
int main()
{
    char str[]="arizeet", strR[N];
    int i=0,j=0,k=0;
    system("cls");
    while (str[i]!='\0')
    {
        k++;
        i++;
    }
    while (str[j]!='\0')
    {
        strR[k]=str[j];
        k--;
        j++;
    }
    strR[j+1]='\0';
    puts(strR);
    return 0;
}