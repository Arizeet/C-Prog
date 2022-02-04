//WAP to find mean of n numbers using array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    float sum=0;
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
        sum=sum+array[i];}
    printf("\nThe avg of the entered nos is %.2f",(float)(sum/n));
    return 0;
}