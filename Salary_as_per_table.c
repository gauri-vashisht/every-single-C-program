/*WAP to calculate salary as per the following table (page 61, chapter 4 Let us C)*/

#include <stdio.h>
int main()
{
    int yos; char gender, qual;
    printf("Enter gender (m/f), years of service, qualifications (p/g): ");
    scanf("%c %d %c", &gender, &yos, &qual);

    if ( gender == 'm' && qual == 'p' )
    {
        if ( yos >= 10 )
            printf("Salary = 11000");
        else
            printf("Salary = 10000");
    }
    else if ( gender == 'm' && qual == 'g' )
    {
        if ( yos >= 10 )
            printf("Salary = 10000");
        else 
            printf("Salary = 7000");
    }
    if ( gender == 'f' && qual == 'p' )
        {
            if ( yos >= 10 )
                printf("Salary = 12000");
            else
                printf("Salary = 10000");
        }
    else if ( gender == 'f' && qual == 'g' )
        {
            if ( yos >= 10 )
                printf("Salary = 9000");
            else
                printf("Salary = 6000");
        }
}