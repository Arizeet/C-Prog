//WAP to find sum and avg of natural nos upto 10 using while loop
#include <stdio.h>

int main()
{
    int a=1,b=0;
    float c;
    while (a<=10)
    {
        b=a+b;
        a++;
    }
    printf("The sum of natural nos upto 10 is %d",b);
    c=(float)b/10;
    printf("\nThe avg of natural nos upto 10 is %.2f",c);
    return 0;
}