/*WAP to find the wind chill factor*/

#include <stdio.h>
#include <math.h>
int main()
{
    float t, v, wcf;
    printf("Enter value of temperature: ");
    scanf("%f", &t);
    printf("Enter value of wind velocity: ");
    scanf("%f", &v);
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75) * pow(v, 0.16);
    printf("The wind chill factor = %f", wcf);
}