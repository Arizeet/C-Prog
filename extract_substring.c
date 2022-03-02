#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50
int main()
{
    char str[]="Arizeet", strSub[N];
    int m,n,p=0;
    system("cls");
    printf("The String is: ");
    puts(str);
    printf("Enter the starting position: ");
    scanf("%d",&m);
    printf("Enter the ending position: ");
    scanf("%d",&n);
    for (int i = m-1; i <=n-1; i++)
    {
        strSub[p]=str[i];
        p++;
    }
    strSub[n-m+1]='\0';
    if (m>7)
    {
        printf("~~~ NULL String ~~~");
    }
    else
    {
        printf("The Substring is: ");
        puts(strSub);
    }
    
    return 0;
}