#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int arr[N],n,lar,lar2;
    system("cls");
    printf("Enter no of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    lar=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>lar)
        {
            lar=arr[i];
        }
    }
    lar2=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=lar)
        {
            if (arr[i]>lar2)
            {
                lar2=arr[i];
            }   
        }
    }
    printf("\nlargest= %d",lar);
    printf("\n2nd largest= %d",lar2);
    
    return 0;
}