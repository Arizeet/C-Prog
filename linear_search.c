#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10],i,pos,num,n,flag=0;
    system("cls");
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number u want: ");
    scanf("%d",&num);
    for (i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            printf("Position= %d\n",i+1);
            flag++;
        }
    }
    if(flag==0){
        printf("The element is not present...");
    }
    return 0;
}