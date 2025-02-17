#include <stdio.h>
int main()
{
	int days;
	printf("Enter no of days you are late: ");
	scanf("%d", &days);
	
	if (days<=5)
		printf("Fine = 50 p");
	else if (days>=6 && days<=10)
		printf("Fine = 1 rupee");
	else if (days>10 && days<30)
		printf("fine = 5 rupee");
	else
		printf("membership cancel");
    return 0;
}

