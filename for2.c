//WAP to print in given format:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    for (int a = 0; a <4; a++)
    {
        for (int b = 0; b <=a; b++)
        {
            printf("%d  ",a+1);
        }
        printf("\n");
    }
    
    return 0;
}