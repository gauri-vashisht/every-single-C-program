/*convert fahrenheit to celsius*/

#include <stdio.h>
int main()
{
    float tempf, tempc;
    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f", &tempf);
    tempc = (tempf - 32)*(0.5556);
    printf("The temperature in Centigrade = %f", tempc);
}   