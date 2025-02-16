/* input in kms convert to m, cm, ft, inch */

#include <stdio.h>
int main()
{
    float km, m, cm, ft, inch;
    printf("Enter value in Kilometers: \n");
    scanf("%f", &km);
    m=km*1000;
    cm=m*1000;
    inch=cm/2.54;
    ft=inch/12;
    printf("Value in Meters = %f \n", m);
    printf("Value in Cm = %f \n", cm);
    printf("Value in Inch = %f \n", inch);
    printf("Value in Feet = %f \n", ft);
}