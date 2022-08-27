#include<stdio.h>

void arrRev(int arr[]){
    int temp;
    for (int i = 0; i < (7/2); i++){
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
}
void arrPrint(int arr[]){
    for (int i = 0; i < 7; i++){
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("Before reverse\n");
    arrPrint(arr);
    printf("\nAfter reverse\n");
    arrRev(arr);
    arrPrint(arr);
    return 0;
}