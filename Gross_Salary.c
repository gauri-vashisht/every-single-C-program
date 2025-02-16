/* Gross Salary from base salary using da, hra */

#include <stdio.h>
int main()

{
    float base,da,hra,gross;
    printf("Enter base salary:\n");
    scanf("%f", &base);
    da=base*0.4;
    hra=base*0.2;
    gross=da+hra+base;
    printf("The dearness allowance is %f \n", da);
    printf("The house rent allowance is %f \n", hra);
    printf("The Gross salary is %f\n", gross);
}