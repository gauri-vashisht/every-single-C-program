/*WAP for simple interest.*/

#include <stdio.h>
int main()
{
    float p, r, t;
    printf("Enter principle, rate, time separated by space: ");
    scanf("%f %f %f", &p, &r, &t);
    printf("The Simple Interest: %f", p*r*t/100);
}