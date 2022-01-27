//Find the sum of the series
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    float sum=0,t;
    system("cls");
    printf("1/(1^2) + 1/(2^2) + 1/(3^2) +...+ 1/(n^2)\n");
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (float i = 1; i <=n; i++)
    {
        t=1/(i*i);
        sum=sum+t;
    }
    printf("%f",sum);
    return 0;
}