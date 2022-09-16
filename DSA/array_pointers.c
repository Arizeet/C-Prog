#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[6];
    int *p=a;
    for (int i = 0; i < 6; i++){
        scanf("%d",&a[i]);  //(a+i), (p+i), (i+a)
    }
    for (int i = 0; i < 6; i++){
        printf("%d ",a[i]); //*(a+i), *(p+i), i[a], i[p]
    }
    
    printf("1.  %d\n",p);
    printf("2.  %d\n",a);
    printf("3.  %d\n",&a);
    printf("4.  %d\n",&p);
    printf("5.  %d\n",p+1);     //base address + 1
    printf("6.  %d\n",a+1);     //base address + 1
    printf("7.  %d\n",&a+1);    //total address + 1
    printf("8.  %d\n",*a);      //value at base address
    printf("9.  %d\n",*(a+2));  //value at (base address +2)
    printf("10. %d\n",*a+2);    //(value at base address) +2
    printf("11. %d\n",0[a]);    //value at base address //*(i+a)=i[a]
    printf("12. %d\n",2[p]);    //value at (base address +2) //*(i+p)=i[p]
    return 0;
}