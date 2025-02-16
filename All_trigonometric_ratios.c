/*WAP to print all trig ratios of an angle*/

#include <stdio.h>
#include <math.h>
int main()
{
    float angle;
    printf("Enter any value of angle: ");
    scanf("%f", &angle);
    printf("Sine = %f", sin(angle)); printf(" Sine Inverse = %f\n", asin(angle)); 
    printf("Cosine = %f", cos(angle)); printf(" Cos Inverse = %f\n", acos(angle));
    printf("Tangent = %f", tan(angle)); printf(" Tan Inverse = %f\n", atan(angle));
    printf("Cosecant = %f", 1/sin(angle)); printf(" Cosec Inverse = %f\n", asin(1/(angle)));
    printf("Secant = %f", 1/cos(angle)); printf(" Sec Inverse = %f\n", acos(1/(angle)));
    printf("Cotangent = %f", 1/tan(angle)); printf(" Cot Inverse = %f\n", atan(1/(angle)));
}