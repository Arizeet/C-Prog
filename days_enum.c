#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    char *a[100]={"sun","mon","tues"};
    enum week{sun,mon,tues};
    system("cls");
    printf("enter: ");
    scanf("%d",&n);
    printf("%s",a[n-1]);
    return 0;
}