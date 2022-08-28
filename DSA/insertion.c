#include <stdio.h>
#include <stdlib.h>
void insertArr(int arr[], int pos, int num, int n){
    for (int i = n; i >= pos - 1; i--){
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
}
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[50], pos, num, n, t;
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
    printf("\nEnter the number of times u want to insert: ");
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        printf("\nEnter the number to insert: ");
        scanf("%d", &num);
        printf("Enter the position to insert: ");
        scanf("%d", &pos);
        if (pos>n){
            printf("The position is more than no. of elements, so...\n");
            n++;
            pos=n;
            insertArr(arr, pos, num, n);
        }
        else{
            insertArr(arr, pos, num, n);
            n++;
        }
        printf("New array is...\n");
        printArr(arr, n);
    }
    return 0;
}