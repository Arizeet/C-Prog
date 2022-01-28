//Armstrong Number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,s=0;
    system("cls");
    printf("Enter a no: ");
    scanf("%d",&a);
    c=a;
    for (int i = 0; a>0; i++){
        b = a%10;
        s=s+(b*b*b);
        a=a/10;}
    if (s==c){
        printf("%d is an Armstrong number",c);}
    else{
        printf("%d is not a Armstrong number",c);}
    return 0;
}