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
        img1 = (float)(-num2)/(2*num1);
        img2 = (float)sqrt(-D)/(2*num1);
        if (D < 0)
        {
            printf("\nThe root of the formed Quadratic eqn are complex roots.\n");
            printf("And the roots are %.2f + %.2fi and %.2f - %.2fi",img1,img2,img1,img2);
        }
        else if (D == 0)
        {
            printf("The roots of the Quadratic eqn are real and equal.\nAnd the root is %.2f", x);
        }
        else if (D > 0)
        {
            printf("The roots of the Quadratic eqn are real and distinct.\nAnd the roots are %.2f and %.2f.", x, y);
        }