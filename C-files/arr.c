#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[50];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter: ");
        scanf("%d",arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}