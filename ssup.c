switch (num1)
            {
            case 1:
                printf("Enter length in cm: ");
                scanf("%f",x);
                printf("%.2f cm = %.2f inches",x,(x/2.54));
                break;
            case 2:
                printf("Enter length in inches: ");
                scanf("%f",x);
                printf("%.2f inches = %.2f cm",x,(x*2.54));
                break;
            case 3:
                printf("Enter length in inches: ");
                scanf("%f",x);
                printf("%.2f inches = %.2f ft",x,(x/12));
                break;
            case 4:
                printf("Enter length in ft: ");
                scanf("%f",x);
                printf("%.2f ft = %.2f cm",x,(x*30.48));
                break;
            case 5:
                printf("Enter length in ft: ");
                scanf("%f",x);
                printf("%.2f ft = %.2f m",x,(x/3.281));
                break;
            case 6:
                printf("Enter length in km: ");
                scanf("%f",x);
                printf("%.2f km = %.2f miles",x,(x/1.609));
                break;
            case 7:
                printf("Enter length in miles: ");
                scanf("%f",x);
                printf("%.2f miles = %.2f km",x,(x*1.609));
                break;
            default:
                printf("Enter a valid number...");
                break;
            }