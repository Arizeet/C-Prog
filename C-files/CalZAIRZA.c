#include <stdio.h>
#include<stdlib.h>
#include <math.h>
float Arith(float num1, float num2, char a)
{
    switch (a)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        return num1 / num2;
        break;
    default:
        printf("Invalid input...");
        break;
    }
}
float Linear(float num1, float num2, float num3, int a, float *x_inc, float *y_inc)
{
    switch (a)
    {
    case 1:
        return (num3 - num2) / num1;
        break;
    case 2:
        return *x_inc = num3 / num1, *y_inc = num3 / num2;
        break;
    default:
        printf("Invalid input...");
        break;
    }
}
float Length(float x, int a)
{
    switch (a)
    {
    case 1:
        return x / 2.54;
        break;
    case 2:
        return x * 2.54;
    case 3:
        return x / 12;
    case 4:
        return x / 3.281;
    case 5:
        return x / 1.609;
    case 6:
        return x * 1.609;
    default:
        break;
    }
}
float Area(float x, int a)
{
    switch (a)
    {
    case 1:
        return x * 1.196;
        break;
    case 2:
        return x * 10.764;
    case 3:
        return x * 10000;
    case 4:
        return x * 4046.86;
    case 5:
        return x * 2.47105;
    default:
        break;
    }
}
float Volume(float x, int a)
{
    switch (a)
    {
    case 1:
        return x * 1000;
        break;
    case 2:
        return x * 35.3147;
    case 3:
        return x * 28.317;
    default:
        break;
    }
}
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
float Mass(float x, int a)
{
    switch (a)
    {
    case 1:
        return x * 2.20462;
        break;
    case 2:
        return x / 6.35;
    case 3:
        return x / 2.205;
    default:
        break;
    }
}
float Temp(float x, int a)
{
    switch (a)
    {
    case 1:
        return x * 9 / 5 + 32;
        break;
    case 2:
        return (x - 32) * 5 / 9;
    case 3:
        return x + 273.15;
    default:
        break;
    }
}
int main()
{
    int a;
    int num, num1, num2, num3, num4 = 1;
    float x, y, z, p, q, D;
    char c;
    system ("cls");
    printf("****CALCULATOR*****\n\n");
label_1:
    printf("\n\nEnter the no. against the operation you want:");
    printf("\n\n1. Arithmetic Calculations\n2. Linear equations\n3. Quadratic equation\n4. Factorial\n");
    printf("5. Square & Cube\n6. Square-root & Cube-root\n7. (x)^(y)\n8. Unit Converter\n9. BMI\n10. Numeral System\n11. Quit\n\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("\nBasic Arithmetic Calculator:\n");
        scanf("%d%c%d", &num1, &c, &num2);
        printf("%.1f %c %.1f = %.2f", (float)num1, c, (float)num2, Arith(num1, num2, c));
        break;

    case 2:
        printf("\nLinear equation:\nEnter...\n1. For One Variable\n2. For Two variable\n");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("Linear eqn in one var is of the form ax + b = c.\nEnter\na=");
            scanf("%f", &x);
            printf("b=");
            scanf("%f", &y);
            printf("c=");
            scanf("%f", &z);
            Linear(x, y, z, a, &p, &q);
            printf("The value of x = %.2f", Linear(x, y, z, a, &p, &q));
        }
        else
        {
            printf("Linear eqn in two var is of the form ax + by = c.\nEnter\na=");
            scanf("%f", &x);
            printf("b=");
            scanf("%f", &y);
            printf("c=");
            scanf("%f", &z);
            Linear(x, y, z, a, &p, &q);
            printf("The x-intercept=%.2f & y-intercept=%.2f.", p, q);
        }
        break;
    case 3:
        printf("Quadratic Equation:\n");
        printf("The Quadratic eqn is of the form ax^2 + bx + c = 0\nEnter...\na=");
        scanf("%d", &num1);
        printf("b=");
        scanf("%d", &num2);
        printf("c=");
        scanf("%d", &num3);
        printf("The formed Quadratic eqn is %dx^2 + %dx + %d = 0\n", num1, num2, num3);
        D = (num2 * num2) - (4 * num1 * num3);
        x = ((-num2) + sqrt(D)) / (2 * num1);
        y = ((-num2) - sqrt(D)) / (2 * num1);
        if (D < 0)
        {
            printf("The root of the formed Quadratic eqn are complex roots.");
        }
        else if (D == 0)
        {
            printf("The root of the Quadratic eqn is %.2f.", x);
        }
        else if (D > 0)
        {
            printf("The roots are %.2f and %.2f.", x, y);
        }
        break;
    case 4:
        printf("Enter the factorial u want of:\n");
        scanf("%d", &num);
        printf("%d! = %d", num, factorial(num));
        break;
    case 5:
        printf("Square and Cube:\nEnter...\n1. For Square\n2. For Cube\n");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("Enter the number you want square of:\n");
            scanf("%f", &x);
            y = x * x;
            printf("sq(%f) = %.2f", x, y);
        }
        else
        {
            printf("Enter the number you want cube of:\n");
            scanf("%f", &x);
            y = x * x * x;
            printf("sq(%f) = %.2f", x, y);
        }
        break;
    case 6:
        printf("Square-root and Cube-root:\nEnter...\n1. For Square-root\n2. For Cube-root\n");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("Enter the number you want square-root of:\n");
            scanf("%f", &x);
            y = sqrt(x);
            printf("sqrt(%f) = %.2f", x, y);
        }
        else
        {
            printf("Enter the number you want cube-root of:\n");
            scanf("%f", &x);
            y = cbrt(x);
            printf("cbrt(%f) = %.2f", x, y);
        }
        break;
    case 7:
        printf("(x)^(y):\nEnter x and y respectively:\nx=");
        scanf("%f", &x);
        printf("y=");
        scanf("%d", &num1);
        for (int i = 1; i <= num1; i++)
        {
            num4 = x * num4;
        }
        printf("(%.2f)^(%d) = %.2f", x, num1, (float)num4);
        break;
    case 8:
        printf("Unit Converter:\nEnter...\n1. Length\n2. Area\n3. Volume\n4. Mass\n5. Temperature\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Convert Length from:\n1. cm to inches\n2. inches to cm\n3. inches to ft\n4. ft to m");
            printf("\n5. km to miles\n6. miles to km\n");
            scanf("%d", &a);
            if (a == 1)
            {
                printf("Enter length in cm: ");
                scanf("%f", &x);
                Length(x, a);
                printf("%.2f cm = %.2f inches", x, Length(x, a));
            }
            else if (a == 2)
            {
                printf("Enter length in inches: ");
                scanf("%f", &x);
                Length(x, a);
                printf("%.2f inches = %.2f cm", x, Length(x, a));
            }
            else if (a == 3)
            {
                printf("Enter length in inches: ");
                scanf("%f", &x);
                Length(x, a);
                printf("%.2f inches = %.2f ft", x, Length(x, a));
            }
            else if (a == 4)
            {
                printf("Enter length in ft: ");
                scanf("%f", &x);
                Length(x, a);
                printf("%.2f ft = %.2f m", x, Length(x, a));
            }
            else if (a == 5)
            {
                printf("Enter length in km: ");
                scanf("%f", &x);
                Length(x, a);
                printf("%.2f km = %.2f miles", x, Length(x, a));
            }
            else if (a == 6)
            {
                printf("Enter length in miles: ");
                scanf("%f", &x);
                Length(x, a);
                printf("%.2f miles = %.2f km", x, Length(x, a));
            }
            break;
        case 2:
            printf("Convert Area from:\n1. sq(m) to sq(yard)\n2. sq(m) to sq(ft)\n3. Hectare to sq(m)");
            printf("\n4. Acre to sq(m)\n5. Hectare to Acre\n");
            scanf("%d", &a);
            if (a == 1)
            {
                printf("Enter area in sq(m): ");
                scanf("%f", &x);
                Area(x, a);
                printf("%.2f sq(m) = %.2f sq(yard)", x, Area(x, a));
            }
            else if (a == 2)
            {
                printf("Enter area in sq(m): ");
                scanf("%f", &x);
                Area(x, a);
                printf("%.2f sq(m) = %.2f sq(ft)", x, Area(x, a));
            }
            else if (a == 3)
            {
                printf("Enter area in sq(m): ");
                scanf("%f", &x);
                Area(x, a);
                printf("%.2f Hectare = %.2f sq(m)", x, Area(x, a));
            }
            else if (a == 4)
            {
                printf("Enter area in sq(m): ");
                scanf("%f", &x);
                Area(x, a);
                printf("%.2f Acre = %.2f sq(m)", x, Area(x, a));
            }
            else if (a == 5)
            {
                printf("Enter area in Hectare: ");
                scanf("%f", &x);
                Area(x, a);
                printf("%.2f Hectare = %.2f Acre", x, Area(x, a));
            }
            break;
        case 3:
            printf("Convert Volume from:\n1. cb(m) to l\n2. cb(m) to cb(ft)\n3. cb(ft) to l\n");
            scanf("%d", &a);
            if (a == 1)
            {
                printf("Enter volume in cb(m): ");
                scanf("%f", &x);
                Volume(x, a);
                printf("%.2f cb(m) = %.2f l", x, Volume(x, a));
            }
            else if (a == 2)
            {
                printf("Enter volume in cb(m): ");
                scanf("%f", &x);
                Volume(x, a);
                printf("%.2f cb(m) = %.2f cb(ft)", x, Volume(x, a));
            }
            else if (a == 3)
            {
                printf("Enter volume in cb(ft): ");
                scanf("%f", &x);
                Volume(x, a);
                printf("%.2f cb(ft) = %.2f l", x, Volume(x, a));
            }
            break;
        case 4:
            printf("Convert Mass from\n1. kg to lb\n2. kg to stone\n3. lb to kg\n");
            scanf("%d", &a);
            if (a == 1)
            {
                printf("Enter mass in kg: ");
                scanf("%f", &x);
                Mass(x, a);
                printf("%.2f kg = %.2f lb", x, Mass(x, a));
            }
            else if (a == 2)
            {
                printf("Enter mass in kg: ");
                scanf("%f", &x);
                Mass(x, a);
                printf("%.2f kg = %.2f stone", x, Mass(x, a));
            }
            else if (a == 3)
            {
                printf("Enter mass in lb: ");
                scanf("%f", &x);
                Mass(x, a);
                printf("%.2f lb = %.2f kg", x, Mass(x, a));
            }
            break;
        case 5:
            printf("Convert Temperature from\n1. Celsius to Fahrenheit\n2. Fahrenheit\n3. Celsius to Kelvin\n");
            scanf("%d", &a);
            if (a == 1)
            {
                printf("Enter temp in Celsius: ");
                scanf("%f", &x);
                Temp(x, a);
                printf("%.2f C = %.2f F", x, Temp(x, a));
            }
            else if (a == 2)
            {
                printf("Enter temp in Fahrenheit: ");
                scanf("%f", &x);
                Temp(x, a);
                printf("%.2f F = %.2f C", x, Temp(x, a));
            }
            else if (a == 3)
            {
                printf("Enter temp in Celsius: ");
                scanf("%f", &x);
                Temp(x, a);
                printf("%.2f C = %.2f K", x, Temp(x, a));
            }
            break;
        default:
            printf("Invalid input...");
            break;
        }
        break;
    case 9:
        printf("Body Mass Index:\nEnter...\nYour mass in kg: ");
        scanf("%f", &x);
        printf("\nYour height in m: ");
        scanf("%f", &y);
        D = x / (y * y);
        printf("Your BMI = %.2f", D);
        if (D < 18.5)
        {
            printf("\nUnderweight...  Eat more ^0^");
        }
        else if (18.5 < D < 24.9)
        {
            printf("\nNormal...  Keep it up ^_~");
        }
        else if (D > 25)
        {
            printf("\nOverweight... Need to workout  O.O");
        }
        break;
    case 10:
        printf("Numeral System:\nConvert...\n1. Decimal to Hexadecimal\n2. Decimal to Octal\n");
        scanf("%d",&a);
        if (a==1)
        {
            printf("Enter number in Decimal: ");
            scanf("%d",&num);
            printf("%d (DEC) = %x (HEX)",num,num);
        }
        else if (a==2)
        {
            printf("Enter number in Decimal: ");
            scanf("%d",&num);
            printf("%d (DEC) = %o (OCT)",num,num);
        }
        break;
    case 11:
        printf("\nQuitting the program...");
        goto end;
        break;
    default:
        printf("Invalid input...");
        break;
    }
    goto label_1;
end:
    return 0;
}