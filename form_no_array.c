//WAP to enter n number of digit and form a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long int i, n, digit[10], num = 0;
    system("cls");
    printf("Enter no of digits: ");
    scanf("%ld", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the digit at position %ld: ", i+1);
        scanf("%ld", &digit[i]);
    }
    for (i = 0; i <n; i++)
    {
        num = (digit[i] * pow(10, i))+num;
    }
    printf("\nThe number is: %ld", num);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d",digit[i]);
    // }
    
    return 0;
}