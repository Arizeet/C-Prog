#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[] = "ArIzEeT";
    int i=0;
    system("cls");
    while (str[i] != '\0')
    {
        if (str[i] < 96)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    puts(str);
    return 0;
}