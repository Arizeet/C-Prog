#include<stdio.h>
#include<stdlib.h>
int rec(int num1,int num2);
int main()
{
    int num1,num2,b,c,gcd;
    system("cls");
    printf("Enter the 1st & 2nd no. respectivly: ");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        b=num1;
        c=num2;
    }
    else
    {
        b=num2;
        c=num1;
    }
    gcd=rec(b,c);
    printf("GCD of %d & %d = %d",num1,num2,gcd);
    return 0;
}
int rec(int num1,int num2)
{
    int a;
    a=num1%num2;
    if (a==0)
    {
        return num2;
    }
    else
    {
        return rec(num2,a);
    }
}