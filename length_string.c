#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[]="Arizeet";
    int i=0;
    system("cls");
    while (str[i]!='\0')
    {
        i++;
    }
    printf("The length of String is %d",i);
    return 0;
}