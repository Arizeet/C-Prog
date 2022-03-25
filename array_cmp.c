#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr1[50],arr2[50],n,dup=0;
    system("cls");
    printf("Enter no of ele: ");
    scanf("%d",&n);
    printf("Enter 1st array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 2nd array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr1[i]==arr2[j])
            {
                dup++;
            }  
        }
    }
    printf("\n%d",dup);
    return 0;
}