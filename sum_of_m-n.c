//WAP to calculate sum of numbers from m to n
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,s=0;
    system("cls");
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);
    while (m<=n)
    {
        s=s+m;
        m++;
    }
    printf("The sum of m to n is %d",s);
    return 0;
}