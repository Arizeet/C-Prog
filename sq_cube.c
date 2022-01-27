//WAP to display the square and cube of 1st 10 natural nos.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=1,b,c,n=0;
    system("cls");
    do
    {
        b=a*a;
        c=a*a*a;
        printf("sq(%d)=%d, cb(%d)=%d\n",a,b,a,c);
        n++;
        a++;
    } while (n<10);
    return 0;
}