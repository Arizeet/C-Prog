//WAP to calculate avg of n natural nos using do while loop
#include <stdio.h>
#include<stdlib.h>
int main()
{
    float a,b=1,c=0;
    system("cls");
    printf("Enter the no: ");
    scanf("%f",&a);
    do
    {
        c=c+b;
        b++;
    } while (b<=a);
    printf("The avg of %.0f natural nos is %.2f",a,(c/a));
    return 0;
}