//WAP to read and display n random number using array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    system("cls");
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int array[n];
    for (int i = 1; i <=n; i++){
        if (i==1){
            printf("Enter the 1st element of array: ");}
        else if (i==2){
            printf("Enter the 2nd element of array: ");}
        else if (i==3){
            printf("Enter the 3rd element of array: ");}
        else{
            printf("Enter the %dth element of array: ",i);}
        scanf("%d",&array[i]);}
    printf("Array formed is:\n");
    for (int i = 1; i <=n; i++){
        printf("%d\t",array[i]);}
    return 0;
}