#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, sum=0,min,max;
    system("cls");
    printf("Enter min & max: ");
    scanf("%d%d",&min,&max);
    for (int i = min; i <=max; i++)
    {
        for (int j = min; j <max/2; j++)
        {
            if (max%j==0)
            {
                sum=sum+j;
            }
        }
        if (sum==i)
        {
            printf("\t%d",i);
        }
    }
    return 0;
}