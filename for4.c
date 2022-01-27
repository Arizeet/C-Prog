//WAP to print in given form:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    for (int a = 1; a <=5; a++)
    {
        for (int c = 5; c>=a;c--)
            {
                printf("  ");
            }
        for (int b = 1; b <=a; b++)
        {
            printf(" %d",b);
        }
        printf("\n");
    }
    return 0;
}