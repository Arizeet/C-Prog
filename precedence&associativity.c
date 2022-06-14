#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=1,b=3,c=5;
    c=(a>=3-b)%1&&(b=a=10);
    printf("%d %d %d",a,b,c);
    return 0;
}