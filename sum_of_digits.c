//Sum of digits of a number
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,d,n;
    system("cls");
    printf("Enter the no u want the sum of digits: ");
    scanf("%d",&n);
    if (n>=1000){
        a=n/1000;
        b=(n%1000)/100;
        c=((n%1000)%100)/10;
        d=(((n%1000)%100)%10);
        printf("%d + %d + %d + %d = %d",a,b,c,d,(a+b+c+d));}
    else if (100<=n<1000){
        a=n/100;
        b=(n%100)/10;
        c=((n%100)%10);
        printf("%d + %d + %d = %d",a,b,c,(a+b+c));}
    else if (10<=n<100){
        a=n/10;
        b=(n%10);
        printf("%d + %d = %d",a,b,(a+b));}
    else if (n<10){
        a=n;
        printf("%d",a);}
    return 0;
}