// WAP to print in given format:
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    for (int a = 2; a <= 8; a = a + 2)
    {
        for (int c = 8; c >= a; c = c - 1)
        {
            printf("  ");
        }
        for (int b = 1; b <= a; b++)
        {
            printf(" %d", b);
        }
        printf("\n");
    }
    return 0;
}