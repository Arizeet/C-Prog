//GCD of a Number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,m;
    system("cls");
    printf("Enter 2 nos: ");
    scanf("%d%d",&a,&b);
    for (int i = 1; i<=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
            m=i;
        }
    }
    printf("GCD of %d & %d = %d",a,b,m);
    return 0;
}