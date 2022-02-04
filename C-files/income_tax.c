//INCOME TAX
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int salary,tax;
    system("cls");
    printf("Enter your salary: ");
    scanf("%d",&salary);
    if (salary<150000){
        printf("Your salary is %d\nNO TAX",salary);}
    else if (150000 <=salary<300000){
        tax= salary/10;
        printf("Your salary is %d\nTAX = %d",salary,tax);}
    else if (300000<=salary){
        tax= salary/5;
        printf("Your salary is %d\nTAX = %d",salary,tax);}
    return 0;
}