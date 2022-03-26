#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    char *a[7]={"sun","mon","tues"};
    enum week{sun,mon,tues};
    printf("enter: ");
    scanf("%d",&n);
    printf("%s",a[n-1]);
    return 0;
}