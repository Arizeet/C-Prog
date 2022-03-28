#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int arr[N],n,low=0, high, mid,num;
    system("cls");
    printf("Enter no of elements in array:\n");
    scanf("%d",&n);
    high=n;
    printf("Enter the elements in ascending order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the num u want to search: ");
    scanf("%d",&num);
    for (int i = 0; low<=high; i++)
    {
        mid=(high+low)/2;
        if (arr[mid]==num)
        {
            printf("Position = %d ", mid+1);
            break;
        }
        else if (num<arr[mid])
        {
            high= mid-1;
        }
        else
            low=mid+1;
    }
    
    return 0;
}