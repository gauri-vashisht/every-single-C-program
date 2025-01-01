/*WAP to calculate gross salary of a person*/

#include <stdio.h>
int main()
{
    int base;
    printf("Enter Base Salary: ");
    scanf("%d", &base);
    printf("The Gross Salary is = %f", base+0.12*base+0.1*base);
}