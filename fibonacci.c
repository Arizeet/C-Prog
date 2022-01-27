// WAP to print the Fibonacci Sequence
#include <stdio.h>
#include <stdlib.h>
int main()
{int n1 = 0, n2 = 1, n3, n;
    system("cls");
    printf("Enter no of terms: ");
    scanf("%d", &n);
    printf("The Fibonacci sequence of %d terms is:\n", n);
    if (n == 1){
        printf("%d", n1);}
    else if (n == 2){
        printf("%d, %d", n1, n2);}
    else{
        printf("%d, %d", n1, n2);
        for (int i = 2; i < n; i++){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            printf(", %d", n3);}
    }
    return 0;
}