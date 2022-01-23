//WAP to enter a no. from 1 to 7 & display the corresponding days of the week using switch case.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the day of the week: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Day %d of the week is Monday.",a);
        break;
    case 2:
        printf("Day %d of the week is Tuesday.",a);
        break;
    case 3:
        printf("Day %d of the week is Wednesday.",a);
        break;
    case 4:
        printf("Day %d of the week is Thursday.",a);
        break;
    case 5:
        printf("Day %d of the week is Friday.",a);
        break;
    case 6:
        printf("Day %d of the week is Saturday.",a);
        break;
    case 7:
        printf("Day %d of the week is Sunday.",a);
        break;
    default:
        printf("Enter a valid day of the week i.e. 1 to 7...");
        break;
    }
    return 0;
}