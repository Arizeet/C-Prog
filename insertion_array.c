#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20]={1,2,3,4,5,6,7,8,9,10};
    int pos,num;
    system("cls");
    printf("Enter the number u want to insert: ");
    scanf("%d",&num);
    printf("Enter the position u want to insert: ");
    scanf("%d",&pos);
    for (int i = 9 ; i >= pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}