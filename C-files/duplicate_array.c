#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int arr[N],arr2[N],dup,flag=0,n;
    system("cls");
    printf("Enter no of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];
    }
    printf("Entered array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j] && i!=j)
            {
                flag++;
                for (int k = 0; k < 1; k++)
                {
                    printf("\nRepeated no is %d at position:",arr[i]);
                    printf("%d\t",i);
                }   
            }   
        }
    }
    if (flag=0)
    {
        printf("No Duplicates found...!!");
    }
    return 0;
}