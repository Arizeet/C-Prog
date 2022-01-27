// WAP to check whether a no is prime or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b = 2, c = 0;
    //system("cls");
    printf("Enter a no: ");
    scanf("%d", &a);
    do
    {
        if (a % b == 0)
        {
            c=c+1;
            b++;
        }
    } while (b <= a/2);
    if (c == 1)
    {
        printf("neither Prime nor Composite");
    }
    else
    {
        if (c==0)
        {
            printf("P");
        }
        else
        {
            printf("C");
        }
    }
    return 0;
}