//compound interest

#include <stdio.h>
#include <math.h>
int main()
{
	float p, r, a;
	int n;
	printf("Enter principal, rate, no of years: ");
	scanf("%f%f%d", &p, &r, &n); fflush(stdin);
	a = pow((1 + r/100), n);
	a *= p;
	printf("Amount after %d years = %.2f", n, a);
    return 0;
}

