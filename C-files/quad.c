//WAP to calculate roots of a quadratic equation

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D,r1,r2,r3,p;
	printf("The Quadratic eqn is of the form ax^2 + bx + c = 0");
	printf("\nEnter the values of the co-efficients:\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("The formed Quadratic eqn is %dx^2 + %dx + %d = 0\n",a,b,c);
	D=sqrt((b*b)-(4*a*c));
	r1=((-b)+D)/(2*a);
	r2=((-b)-D)/(2*a);
	if(D<0)
	{
		p='a';
	}
	else if (D==0)
	{
		p='b';
	}
	else if(D>0)
	{
		p='c';
	}
	switch(p)
	{
		case 'a':
			printf("The root of the formed Quadratic eqn doesn't exist.");
			break;
		case 'b':
			printf("The root of the Quadratic eqn is %d.",r1);
			break;
		case 'c':
			printf("The roots are %d and %d.",r1,r2);
			break;
	}
    return 0;
}