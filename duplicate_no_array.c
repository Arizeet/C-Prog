#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],b[10],seen,size,count=0;
    system("cls");
    printf("Enter the elements of array:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("The Array formed is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nThe duplicate nos are:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[j]=b[i])
            {
                printf("%d\t",b[i]);
            }
        }
    }
    return 0;
}