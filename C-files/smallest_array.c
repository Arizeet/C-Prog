#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int arr[N],small,small2,n;
    system("cls");
    printf("Enter no of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    small=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<small)
        {
            small=arr[i];
        }
    }
    small2=arr[1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=small)
        {
            if (arr[i]<small2)
            {
                small2=arr[i];
            } 
        }
    }
    printf("\nSmallest= %d",small);
    printf("\n2nd Smallest= %d",small2);
    return 0;
}