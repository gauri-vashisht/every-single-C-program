/*WAP to convert cartesian coordinates to polar coordinates*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, phi;
    printf("Enter cartesian coordinates x and y: ");
    scanf("%f %f", &x, &y);
    r=sqrt(pow(x,2) + pow(y,2));
    phi= atan(y/x);
    printf("The polar coordinates are: %f", r); printf(" , %f", phi);
}