//WAP  to find largest of n numbers using array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, max=-100;
    system("cls");
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&array[i]);}
    printf("Array formed is:\n");
    for (int i = 0; i < n; i++){
        printf("%d\t",array[i]);
        if (array[i]>max){
            max=array[i];};}
    printf("\nThe largest of the entered nos is %d",max);
    return 0;
}