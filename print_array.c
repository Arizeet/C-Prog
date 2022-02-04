//WAP to read and display the values in the array and print them sequentially

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[7]={1,2,3,4,5,6,7};
    system("cls");
    printf("The elements of the array are:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}