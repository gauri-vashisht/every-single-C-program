//find gross salary (gross salary = basic + hr allowance + travel allowance

#include <stdio.h>
int main()
{
	int b, hra, ta, gs;
	printf("Enter basic salary: ");
	scanf("%d", &b);
	printf("How much percent of basic salary is HRA and TA respectively? ");
	scanf("%d%d", &hra, &ta);
	hra = b*hra/100;
	ta = b*ta/100;
	gs = b + hra + ta;
	printf("Gross Salary = %d", gs); 
    return 0;
}

