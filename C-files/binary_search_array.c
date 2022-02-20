#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[11]= {0,1,2,3,4,5,6,7,8,9,10};
    int low=0, high=11, mid,num;
    system("cls");
    printf("Enter the num u want ot search: ");
    scanf("%d",&num);
    for (int i = 0; low<=high; i++)
    {
        mid=(high+low)/2;
        if (arr[mid]==num)
        {
            printf("Position = %d ", mid+1);
            break;
        }
        else if (num<arr[mid])
        {
            high= mid-1;
        }
        else
            low=mid+1;
    }
    
    return 0;
}