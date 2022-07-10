#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    // int n;
    // scanf("%d", &n);
  	// Complete the code to print the pattern.
    for (int i = 1; i <=4; i++)
    {
        for (int j = i; j <=4; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}