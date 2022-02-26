#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0,a=0,b=0,c=0,fail=0;
    system("cls");
    while (i<=5)
    {
        switch (i++)
        {
        case 1:
        case 2: ++a;
        case 3:
        case 4: ++b;
        case 5: ++c;
        default: ++fail;
        }
    }
    printf("i=%d\na=%d\tb=%d\nc=%d\tfail=%d",i,a,b,c,fail);
    return 0;
}