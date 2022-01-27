#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("\n");
        l=n-i;
        // for (int j = 1; j <=l; j++)
        // {
        //     printf("\t");
        // }
        for (int m = 1; m <=i; m++)
        {
            printf("%d",m);
        }
    }
    return 0;
}