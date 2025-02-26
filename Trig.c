//print trigonometric ratios of an angle

#include <stdio.h>
#include <math.h>
int main()
{
	float angle;
	printf("Enter angle: ");
	scanf("%f", &angle);
	
	float s, c, t, tani, cosi, sini;
	s = sin(angle); 
	c = cos(angle);
	t = tan(angle);
	sini = asin(angle);
	cosi = acos(angle);
	tani = atan(angle);
	
	printf("Sin = %.2f \n", s);
	printf("Cos = %.2f \n", c);
	printf("Tan = %.2f \n", t);
	printf("Sin inverse = %.2f \n", sini);
	printf("Cos inverse = %.2f \n", cosi);
	printf("Tan inverse = %.2f \n", tani);
    return 0;
}

