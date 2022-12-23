#include<stdio.h>
#include<stdlib.h>
#define N 50

int main()
{
    int a[N],n,temp;
    system("cls");
    printf("Enter the no of elements in array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Element no. %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 1; i < n; i++)
    {   temp=a[i];
        int j=i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}