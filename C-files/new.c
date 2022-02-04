#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=10;
    do
    {
        printf("%d",(i+1));
        i-=1;
    } while (i!=0);
    
    return 0;
}