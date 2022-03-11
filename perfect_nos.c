#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sum,min,max,i;
    system("cls");
    printf("Enter min & max: ");
    scanf("%d%d",&min,&max);
    printf("The perfect nos. btwn %d & %d is:\n",min,max);
    for (; min <=max; min++)
    {
        sum=0;
        for (i = 1; i < min; i++)
        {
            if (min%i==0)
            {
                sum=sum+i;
            }
        }
        if (min==sum)
        {
            printf("%d\t",sum);
        } 
    }
    
    return 0;
}