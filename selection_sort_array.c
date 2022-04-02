#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], n, small, pos, temp;
    system("cls");
    printf("Enter the no of elements in array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Element no. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n - 1; j++)
    {
        small = arr[j];
        pos = j;
        for (int k = j + 1; k < n; k++)
        {
            if (arr[k] < small)
            {
                small = arr[k];
                pos = k;
            }
        }
        temp = arr[j];
        arr[j] = arr[pos];
        arr[pos] = temp;
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}