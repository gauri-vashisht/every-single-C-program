//Circle perimeter

#include <stdio.h>
int main()
{
	float radius, p;  
	printf("Enter radius: ");
	scanf("%f", &radius);
	
	p = 2*3.14159*radius;
	
	p = (radius > 0) ? p : -1*p ; //handle negative and positive radius
	
	printf("Perimeter = %.4f", p);
    return 0;
}

