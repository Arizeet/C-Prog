#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n,a[100],b[100];
    int k=0;
    system("cls");
    scanf("%d",&t);
    if (t>=1 && t<=100)
    {
        while (t--)
        {
            scanf("%d",&n);
            
            for (int i = 0; i < n; i++)
            {
                scanf("%d",&a[i]);
            }
            for (int i = 0; i < n; i++)
            {
                scanf("%d",&b[i]);
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    if (a[i]==b[j])
                    {
                        k++;
                    }
                    
                }
                
            }
            printf("\n%d",k);
   
        } 
    }
    
    return 0;
}