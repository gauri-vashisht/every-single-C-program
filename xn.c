#include <stdio.h>
int main()
{
	int i=0;
	float x, n, xn=1;
	printf("Enter x and n: ");
	scanf("%f %f", &x, &n);
	
	while (i<n)
	{
		xn*=x;
		i++;
	}
	printf("Answer = %.2f", x);
    return 0;
}

