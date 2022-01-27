//Using while loop print the no. is +ve, -ve or ZERO
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    system("cls");
    printf("Enter a number: ");
    scanf("%d",&a);
    while (a>0){
        printf("\n%d is +ve\n\n",a);
        break;}
    while (a<0){
        printf("\n%d is -ve\n\n",a);
        break;}
    while (a==0){
        printf("\nThe no. is ZERO.\n\n");
        break;}
    return 0;
}