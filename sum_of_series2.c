//Find the sum of the series
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    float sum=0,t;
    system("cls");
    printf("1/2 + 2/3 + 3/4 +...+ n/(n+1)\n");
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (float i = 1; i <=n; i++)
    {
        t=i/(i+1);
        sum=sum+t;
    }
    printf("%f",sum);
    return 0;
}