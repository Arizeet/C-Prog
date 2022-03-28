#include<stdio.h>
#include<stdlib.h>

int main()
{
    float marks;
    system("cls");
    printf("Enter the marks of the student: ");
    scanf("%f",&marks);
    if (80<=marks<=100)
    {
        printf("Marks -> %.2f & Grade -> HONOURS",marks);
    }
    else if (60<=marks<80)
    {
        printf("Marks -> %.2f & Grade -> 1st DIVISION",marks);
    }
    else if (50<=marks<60)
    {
        printf("Marks -> %.2f & Grade -> 2nd DIVISION",marks);
    }
    else if (40<=marks<50)
    {
        printf("Marks -> %.2f & Grade -> 3rd DIVISION",marks);
    }
    else if (0<=marks<40)
    {
        printf("Marks -> %.2f & Grade -> FAIL",marks);
    }
    return 0;
}