#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int a,b;
    system("cls");
    for (int i = 100; i <=200 ; i++)
    {
        if (i%3==0)
        {
            if (i%4 != 0)
            {
                printf("%d, ",i);
            }
            
        }
        
    }
    
    return 0;
}