//simple interest 

#include <stdio.h>
int main()
{
	float p, r, t, si;
	printf("Enter priciple, rate, time period: ");
	scanf("%f%f%f", &p, &r, &t);
	si=p*r*t;
	si/=100;
	printf("Simple interest = %.2f", si);
    return 0;
}

