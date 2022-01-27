#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num, sum = 0;
    system("cls");
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);
    for (int j = 1; j <=num; j++)
    {
        for (i = 1; i <= j; i++)
            if (num % i == 0)
            {
                sum += i;
            }
        if (sum == num && num > 0)
        {
            printf("%d ", num);
        }
    }
    return 0;
}