// Pascal's Triangle
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, coeff = 1;
    system("cls");
    printf("Enter the no of rows u want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n - i; j++){
            printf("  ");}
        for (int k = 0; k <= i; k++){
            if (k == 0 || i == 0){
                coeff = 1;}
            else{
                coeff = coeff * (i - k + 1) / k;}
            printf("%4d", coeff);}
        printf("\n");}
    return 0;
}