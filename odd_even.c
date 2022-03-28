#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    //system("cls");
    printf("enter");
    scanf("%d",&n);
    switch (n%2==0)
    {
    case 0:
        printf("even");
        break;
    case 1:
        printf("odd");
        break;
    default:
        break;
    }       
    return 0;
}