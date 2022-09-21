#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count=0,m,n;
    // system("cls");
    printf("Enter the no of rows: ");
    scanf("%d",&m);
    printf("Enter the no of column: ");
    scanf("%d",&n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (a[i][j]==0)
            {
                count++;
            }
        }
    }
    if (count>(m*n)/2)
        printf("Sparse Matrix");
    else
        printf("Not Sparse Matrix");
    return 0;
}