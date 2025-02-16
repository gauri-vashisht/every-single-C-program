/*WAP to find salary*/

#include <stdio.h>
int main()
{
    int basic;
    printf("Enter basic salary: ");
    scanf("%d", &basic);
    if ( basic < 1500 )
        printf("Gross salary = %f", 0.1*basic + 0.9*basic + basic);
    else
        printf("Gross salary = %f", basic*0.98 + basic + 500);
}