//WAP to determine whether an entered char is a vowel or a consonant

#include <stdio.h>

int main()
{
    char a;
    printf("Enter the char:");
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
        printf("Entered char %c is a vowel.",a);
        break;
    case 'e':
        printf("Entered char %c is a vowel.",a);
        break;
    case 'i':
        printf("Entered char %c is a vowel.",a);
        break;
    case 'o':
        printf("Entered char %c is a vowel.",a);
        break;
    case 'u':
        printf("Entered char %c is a vowel.",a);
        break;
    default:
        printf("Entered char %c is not a vowel.",a);
        break;
    }
    return 0;
}