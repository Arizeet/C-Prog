//#pragma pack(1) 
#include<stdio.h>
#include<stdlib.h>
struct abc
{
    char a;
    char c;
    int b;
    char e;
    char f;
    //float s;
}s;

int main()
{
    system("cls");
    printf("%d",sizeof(s)); 
    return 0;
}