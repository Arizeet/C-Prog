// WAP that accept the number from 1 to 10 & print whether the no. is even or odd using switch case.
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    system("cls");
    printf("Enter a number: ");
    scanf("%d",&a);
    switch (a%2)
    {
    case 1:
        printf("Entered number %d is odd.",a);
        break;
    case 0:
        printf("Entered number %d is even.",a);
        break;
    default:
        printf("Enter a valid number...");
        break;
    }
    return 0;
}