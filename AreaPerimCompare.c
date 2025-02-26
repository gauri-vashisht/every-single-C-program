//is rectangle's area greater than its perimeter

#include <stdio.h>
int main()
{
	float l, b, a, p;
	printf("Enter dimensions of rectangle: ");
	scanf("%f%f", &l, &b);
	
	a = l*b;
	p = 2*(l+b);
	
	if(a > p)
		printf("Area greater than perimeter.");
	else if(a == p)
		printf("Area equal to perimeter.");
	else
		printf("Area less than perimeter.");
    return 0;
}

