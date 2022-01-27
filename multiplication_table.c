//Multiplication table
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    system("cls");
    printf("Enter the no u want multiplication of: ");
    scanf("%d",&a);
    printf("Enter the no of upto u want multiplication table of: ");
    scanf("%d",&b);
    printf("Multiplication table of %d:\n",a);
    for (int i = 1; i <=b; i++)
    {
        printf("%d * %d = %d\n",a,i,(a*i));
    }
    return 0;
}