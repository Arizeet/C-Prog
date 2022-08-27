#include <stdio.h>
#include<math.h>
int main()
{
    float num1,num2,num3,D,img1,img2,x,y;
    printf("Quadratic Equation:\n");
    printf("The Quadratic eqn is of the form ax^2 + bx + c = 0\nEnter...\na=");
    scanf("%f", &num1);
    printf("b=");
    scanf("%f", &num2);
    printf("c=");
    scanf("%f", &num3);
    printf("The formed Quadratic eqn is %fx^2 + %fx + %f = 0\n", num1, num2, num3);
    D = (num2 * num2) - (4 * num1 * num3);
    x = ((-num2) + sqrt(D)) / (2 * num1);
    y = ((-num2) - sqrt(D)) / (2 * num1);
    img1 = (float)(-num2) / (2 * num1);
    img2 = (float)sqrt(-D) / (2 * num1);
    if (D < 0)
    {
        printf("\nThe root of the formed Quadratic eqn are complex roots.\n");
        printf("And the roots are %.2f + %.2fi and %.2f - %.2fi", img1, img2, img1, img2);
    }
    else if (D == 0)
    {
        printf("The roots of the Quadratic eqn are real and equal.\nAnd the root is %.2f", x);
    }
    else if (D > 0)
    {
        printf("The roots of the Quadratic eqn are real and distinct.\nAnd the roots are %.2f and %.2f.", x, y);
    }
    return 0;
}