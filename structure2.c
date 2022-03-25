#include <stdio.h>
#include <stdlib.h>
struct stud
{
    char name[50];
    char branch[50];
    float regd;
};
void detail(struct stud s);
int main()
{
    struct stud s = {"Arizeet", "IT", 2111100599};
    system("cls");
    detail(s);
    return 0;
}
void detail(struct stud s)
{
    printf("Name: %s", s.name);
    printf("\nBranch: %s", s.branch);
    printf("\nRegd: %.0f", s.regd);
}