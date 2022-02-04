//WAP to insert an element at the end of the array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int ub,n;
    system("cls");
    printf("Enter the size of an array: ");
    scanf("%d",&ub);
    printf("Enter the elements of array:\n");
    int array[ub];
    for (int i = 1; i <=ub; i++){
        scanf("%d",&array[i]);}
    printf("Array formed is:\n");
    for (int i = 1; i <=ub; i++){
        printf("%d\t",array[i]);}
    ub=ub+1;
    printf("\nEnter the no. u want to insert at the end: ");
    scanf("%d",&n);
    array[ub]=n;
    printf("The new Array formed is:\n");
    for (int i = 1; i <=ub; i++){
        printf("%d\t",array[i]);}
    return 0;
}