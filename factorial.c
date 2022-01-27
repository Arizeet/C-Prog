//WAP to print factorial of a no using do while loop
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b=1,c;
    system("cls");
    printf("Enter the no: ");
    scanf("%d",&a);
    c=a;
    do
    {
        b=a*b;
        a--;
    } while (a>=1);
    printf("%d! = %d",c,b);
    return 0;
}