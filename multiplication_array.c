#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int arr1[N][N], arr2[N][N],arrM[N][N],sum=0,m,n,p,q;
    system("cls");
    printf("Enter the no of rows n colums of 1st matrix\n");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements of 1st matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr1[m][n]);
        }
    }
    printf("Enter the no of rows n colums of 2nd matriz\n");
    scanf("%d%d",&p,&q);
    printf("\nEnter the elements of 2nd matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr2[p][q]);
        }
    }
    printf("\nMultiplication of 1st n 2nd matrix is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum =0;
            for (int k = 0; k < m; k++)
            {
                sum= sum + arr1[m][k]*arr2[k][n];
            }
            arrM[m][n]=sum;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d\t",arrM[m][n]);
        }
        printf("\n");
    }
    return 0;
}