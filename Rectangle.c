//area perimeter of rectangle

#include <stdio.h>
int main()
{
	float l, b, a, p;
	printf("Enter length and breadth: ");
	scanf("%f%f", &l, &b);
	a = l*b;
	p = 2*(l+b);
	printf("Area = %.2f \t", a);
	printf("Perimeter = %.2f", p);
    return 0;
}

