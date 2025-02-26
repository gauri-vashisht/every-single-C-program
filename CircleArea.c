//area of circle

#include <stdio.h>
int main()
{
	float radius, area;
	printf("Enter radius: ");
	scanf("%f", &radius);
	area = 3.14159*radius*radius;
	printf("Area = %.4f", area); 
    return 0;
}

