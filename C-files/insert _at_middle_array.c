#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int num,pos;
    system("cls");
    printf("Enter the number u want: ");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==num)
        {
            printf("Position= %d",i+1);
            break;
        }
    }
    
    return 0;
}