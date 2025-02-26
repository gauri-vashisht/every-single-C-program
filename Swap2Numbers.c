//swap values of 2 variables

#include <stdio.h>
int main()
{
	int a, b, t;
	printf("Enter a and b: ");
	scanf("%d%d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("Swapped values: %d and %d", a, b);
    return 0;
}

