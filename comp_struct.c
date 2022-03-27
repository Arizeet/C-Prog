#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct class
    {
        int number;
        char name[20];
        float marks;
    };
    int x;
    struct class student1 = {001, "Hari", 172.50};
    struct class student2 = {002, "Bobby", 167.00};
    struct class student3;
    student3 = student2;
    x = ((student3.number == student2.number) &&
         (student3.marks == student2.marks))
            ? 1
            : 0;
    if (x == 1)
    {
        printf("\nstudent2 and student3 are same\n\n");
        printf("%d %s %f\n", student3.number,
               student3.name,
               student3.marks);
    }
    else
        printf("\nstudent2 and student3 are different\n\n");
    return 0;
}