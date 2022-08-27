#include<stdio.h>
int main()
{
    int a=37;
    int* ptra=&a;
    int* ptr=NULL;
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptra);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",ptra);
    printf("The address of ptra is %p\n",&ptra);
    printf("The address of some garbage is %p\n\n",ptr);
    
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    return 0;
}