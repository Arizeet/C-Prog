// WAP to check whether a no is prime or not
#include<stdio.h>
#include<stdlib.h>
int main()
{   int n,b=2,c=0;
    system("cls");
    printf("Enter no: ");
    scanf("%d",&n);
    do{
        if (n%b==0){
            c=c+1;}
        b++;
    } while(b<=n);
    if (c==1){
        printf("PRIME");}
    else{
        printf("NOT PRIME");}
    return 0;
}