//Roots of quadratic equation

#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	printf("Enter coefficients and constant of quadratic equation: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nThe quadratic Equation is: %dx^2 + %dx + %d \n", a, b, c);
	
	if(a==0)
	{
		printf("It is a linear equation! \n");
	}
	else
	{
		float d = (b*b)-4*a*c;
		if(d>0)
		{
			d = sqrt(d);
			float r1 = (-b-d)/(2*a); float r2 = (-b+d)/(2*a);
			printf("Roots are Different and Real \n");
			printf("Root 1 = %.2f \t Root 2 = %.2f \n", r1, r2);
		}
		else if(d==0)
		{
			float roots=-b/(2*a);
			printf("Roots are Real and Equal \n");
			printf("Roots = %.2f \n", roots);
		}
		else
		{
			float r, i;
			r=-b/(2*a);
			d=sqrt(d);
			i=d/(2*a);
			printf("Roots are Complex and conjugate \n");
			printf("Root 1 = %.2f + %.2fi \t Root 2 = %.2f - %2.fi \n", r, i, r, i);
		}
	}
    return 0;
}

