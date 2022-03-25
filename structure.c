#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct Student
    {
        int roll_no;
        char name[50];
        char course[50];
        float fees;
    };
    struct Student stud1;
    system("cls");
    printf("Enter the roll no: ");
    scanf("%d",&stud1.roll_no);
    printf("Enter the name: ");
    scanf("%s",stud1.name);
    printf("Enter the couse: ");
    scanf("%s",stud1.course);
    printf("Enter the fees: ");
    scanf("%f",&stud1.fees);
    printf("~~~ STUDENT'S DETAILS ~~~");
    printf("\nRoll No- %d",stud1.roll_no);
    printf("\nName- %s",stud1.name);
    printf("\nCourse- %s",stud1.course);
    printf("\nFees- %.2f",stud1.fees);
    return 0;
}