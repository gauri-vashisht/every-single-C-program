#include <stdio.h>
int main()
{
	int year, i, dow;
	printf("Enter year: ");
	scanf("%d", &year);
	int days = (year-1900)*365;
	for (i=1900; i<year; i++)
	{
		if ((i%4==0 && i%100!=0) || i%400==0)
			days++;
	}
	
	dow=days%7;
	switch(dow)
	{
		case 0: printf("Monday"); break;
		case 1: printf("Tuesday"); break;
		case 2: printf("Wed"); break;
		case 3: printf("Thur"); break;
		case 4: printf("Fri"); break;
		case 5: printf("Sat"); break;
		case 6: printf("Sun"); break;
		default: printf("Invalid"); 
	}
    return 0;
}

