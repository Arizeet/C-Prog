#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int a[N],n,temp,c=0,pass=0,swap=0;
    system("cls");
    printf("Enter the no of elements in array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Element no. %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {   c=0;
        for (int j = 0; j < (n-1)-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap++;
                c=1;
            }
        }
        if(c==0){
            break;
        }
        pass++;
    }
    printf("Pass = %d\tSwap = %d\n",pass,swap);
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}