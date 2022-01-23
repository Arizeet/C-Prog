// WAP that accept the number from 1 to 10 & print whether the no. is even or odd using switch case.
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number from 1 to 10: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Entered number %d is odd.",a);
        break;
    case 2:
        printf("Entered number %d is even.",a);
        break;
    case 3:
        printf("Entered number %d is odd.",a);
        break;
    case 4:
        printf("Entered number %d is even.",a);
        break;
    case 5:
        printf("Entered number %d is odd.",a);
        break;
    case 6:
        printf("Entered number %d is even.",a);
        break;
    case 7:
        printf("Entered number %d is odd.",a);
        break;
    case 8:
        printf("Entered number %d is even.",a);
        break;
    case 9:
        printf("Entered number %d is odd.",a);
        break;
    case 10:
        printf("Entered number %d is even.",a);
        break;
    default:
        printf("Enter a number in between 1 to 10...");
        break;
    }
    return 0;
}