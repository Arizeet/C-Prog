#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,rev=0,num1;
    system("cls");
    printf("Enter a number: ");
    scanf("%d",&num);
    num1=num;
    while (num!=0)
    {
        rev= rev*10 + num%10;
        num=num/10;
    }
    if (rev==num1)
    {
        printf("%d is a Pallandrome number",num1);
    }
    else
        printf("%d is not a Pallandrome number",num1);
    return 0;
}