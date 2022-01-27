#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rem, sum = 0, i;
    system("cls");
    printf("Enter a number\n");
    scanf("%d", &num);
    for (int j = 0; j < num; j++)
    {
        for (i = 1; i < j; i++)
        {
            rem = num % i;
            if (rem == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num)
            printf(" %d ", num);
    }

    return 0;
}