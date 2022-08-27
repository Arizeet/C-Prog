#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("Address of 1st element is %d\n",&arr[0]);
    printf("Address of 1st element is %d\n",arr);
    printf("Address of 2nd element is %d\n",&arr[1]);
    printf("Address of 2nd element is %d\n\n",arr+1);
    
    printf("Value at address of 1st element is %d\n",*(&arr[0]));
    printf("Value at address of 1st element is %d\n",*(arr));
    printf("Value at address of 2nd element is %d\n",*(&arr[1]));
    printf("Value at address of 2nd element is %d\n\n",*(arr+1));
    return 0;
}