#include<stdio.h>
#include<stdlib.h>
int F(int x,int y);
int main()
{
    int x,y,ans;
    system("cls");
    printf("Enter the value of x and y respectively: ");
    scanf("%d%d",&x,&y);
    ans=F(x,y);
    printf("Ans = %d",ans);
    return 0;
}
int F(int x,int y)
{
    if (y<x)
    {
        return F(x-y,y)-1;
    }
    else if (x<=y)
    {
        return 0;
    }
    
}