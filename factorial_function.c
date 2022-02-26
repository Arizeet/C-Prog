#include<stdio.h>
#include<stdlib.h>

int Factorial(int a);

int main()
{
    int a,b;
    system("cls");
    printf("Enter the no: ");
    scanf("%d",&a);
    b= Factorial(a);
    printf("%d! = %d",a,b);
    return 0;
}
int Factorial(int a)
{
    if(a==1||a==0)
        return 1;
    else
        return a*Factorial(a-1);
}