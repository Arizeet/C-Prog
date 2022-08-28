#include<stdio.h>
#include<stdlib.h>
#define N 50

void insertArray(int arr[],int pos,int num,int n){
    for (int i = n-1; i >= pos-1; i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
}

int main()
{
    int arr[N],pos1,pos2,num1,num2,n;
    system("cls");
    printf("Enter no of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered array is:\n");
    for (int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n\nEnter the 1st no u want to insert: ");
    scanf("%d",&num1);
    printf("Enter the pos u want to insert: ");
    scanf("%d",&pos1);
    insertArray(arr,pos1,num1,n);
    printf("\n\nEnter the 2nd no u want to insert: ");
    scanf("%d",&num2);
    printf("Enter the pos u want to insert: ");
    scanf("%d",&pos2);
    insertArray(arr,pos2,num2,n+1);
    printf("\nInserted array is:\n");
    for (int i = 0; i < n+2; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}