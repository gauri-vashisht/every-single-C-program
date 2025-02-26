//nth root of a number

#include <stdio.h>
#include <math.h>
int main()
{	
	float n, num, root;
	printf("Enter n and number: ");
	scanf("%f%f", &n, &num);
	root = pow(num, 1/n);
	printf("%.2fth root of %.2f = %.2f", n, num, root);
    return 0;
}

