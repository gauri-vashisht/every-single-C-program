//absolute value by ternary operator

#include <stdio.h>
int main()
{
	float abs, num;
	printf("Enter number: ");
	scanf("%f", &num);
	
	abs = (num > 0) ? num : -1*num ;
	
	printf("Absolute value = %.2f", abs); 
    return 0;
}

