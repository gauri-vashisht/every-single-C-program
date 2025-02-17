#include <stdio.h>
#include <math.h>
int main()
{
	int i=0;
	float num, sum, max, min, avg, var, std;
	sum=0;
	while (i<5) 
	{
		printf("enter number: ");
		scanf("%f", &num); fflush(stdin);
		sum+=num;
		if (i==0)
			max=min=num;
		else 
		{
			if (num>max)
				max=num;
			if (num<min)
				min=num;
		}
		i++;
	}
	avg=sum/5;
	i=0;
	
	while (i<5)
	{
		printf("enter again: ");
		scanf("%f", &num); fflush(stdin);
		var += pow((num-avg), 2);
		i++;
	}
	var/=5;
	std=sqrt(var);
	
	printf("avg = %.2f\n", avg);
	printf("max = %.2f\n", max);
	printf("min = %.2f\n", min);
	printf("stddev = %.2f\n", std);
		
    return 0;
    
}

