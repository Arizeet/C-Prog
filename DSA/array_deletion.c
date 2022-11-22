#include <stdio.h>
#include <stdlib.h>
void deleteArr(int arr[], int pos, int n){
    for (int i = pos-1; i < n; i++){
        arr[i] = arr[i+1];
    }
}
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[50], pos, n, t;
    system("cls");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("Enter the elements...\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Entered array is...\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter the number of times u want to delete: ");
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        printf("\nEnter the position to delete: ");
        scanf("%d", &pos);
        if (pos<=n){
            deleteArr(arr, pos, n);
            n--;
        }
        else printf("The position is less than no. of elements, so...");
        printf("\nNew array is...\n");
        printArr(arr, n);
    }
    return 0;
}