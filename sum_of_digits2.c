//Sum of digits of a number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=0,n,q,p;
    system("cls");
    printf("Enter the no u want the sum of digits: ");
    scanf("%d",&n);
    for (int i = 0;n>0; i++)
    {
        q=n%10;
        a=a+q;
        n=n/10;
        printf("%d + ",q);
    }
    printf("\b\b= %d",a);
    return 0;
}