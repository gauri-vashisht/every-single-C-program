//absolute value using if else

#include <stdio.h>
int main()
{
	float num, abs;
	printf("Enter any number: ");
	scanf("%f", &num);
	
	//if positive absolute val = num itself
	if(num >= 0)
	{
		abs=num;
		printf("Absolute value = %.2f", abs);
	}
	//if num is negative, absolute val = -(num)
	else if(num < 0)
	{
		abs=(-1)*num;
		printf("Absolute value = %.2f", abs);
	}
    return 0;
}

