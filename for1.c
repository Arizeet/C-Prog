// WAP to print in given format:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int a=1;
    system("cls");
    for (int a = 1; a <=5; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("%d  ", b);
        }
        printf("\n");
    }

    return 0;
}