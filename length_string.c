#include<stdio.h>
#include<stdlib.h>

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