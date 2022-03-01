#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int arr[N],pos,num,n;
    system("cls");
    printf("Enter no of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the no u want to insert: ");
    scanf("%d",&num);
    printf("Enter the pos u want to insert: ");
    scanf("%d",&pos);
    for (int i = n-1; i >= pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    printf("\nInserted array is:\n");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}