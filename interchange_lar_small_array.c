//WAP to interchange largest and smallest in an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,max=0,min=0,maxpos=0,minpos=0,temp;
    system("cls");
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    int array[n];
    for (int i = 1; i <=n; i++){
        scanf("%d",&array[i]);}
    printf("Array formed is:\n");
    for (int i = 1; i <=n; i++){
        printf("%d\t",array[i]);}
    min=array[1];
    for (int i = 1; i <=n; i++){
        if (array[i]>max){
            max=array[i];
            maxpos=i;}
        if (array[i]<min){
            min=array[i];
            minpos=i;}}
    temp=array[maxpos];
    array[maxpos]=array[minpos];
    array[minpos]=temp;
    printf("\nAfter interchange the Array is:\n");
    for (int i = 1; i <=n; i++){
        printf("%d\t",array[i]);}
    return 0;
}