//WAP to print a msg 10 times "This is a program of do while"
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=1;
    system("cls");
    do
    {
        printf("%d. This is a program of do while\n",a);
        a++;
    } while (a<=10);
    return 0;
}