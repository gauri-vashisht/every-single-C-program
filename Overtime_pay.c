/*WAP to calculate overtime pay of 10 employees. overtime is paid at the rate of 120
rupees per hour for every hour worked above 40 hours*/

#include <stdio.h>
int main()
{
    int i, hours;
    i=1;
    while ( i <= 10 )
    {
        int payment;
        printf("Enter the number of hours worked by Employee: ");
        scanf("%d", &hours);
        if ( hours > 40 )
        {
            payment = (hours - 40)*120;
            printf("Hours Worked overtime = %d The payment for overtime work = %d\n", hours-40, payment);
            i++;
        }
        else
        {
            printf("Employee has not worked overtime.\n");
            i++;
        }
    }
}