//Find the sum of the series
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,t=0;
    system("cls");
    printf("1 + (1+2) + (1+2+3) +...+ (1+2+3+...+n) \n");
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            t=t+1;
        }
        sum=sum+t;
    }
    printf("%d",sum);
    return 0;
}