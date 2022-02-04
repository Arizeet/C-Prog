//WAP to enter n number of digit and form a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, n, digit[10], num = 0;
    system("cls");
    printf("Enter no of digits: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the digit at position %d from right: ", i+1);
        scanf("%d", &digit[i]);
    }
    for (i = 0; i <n; i++)
    {
        num = num + (digit[i] * pow(10, i));
    }
    printf("\nThe number is: %d", num);
    return 0;
}