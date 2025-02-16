/*WAP to take latitude and output distance in nautical miles*/

#include <stdio.h>
#include <math.h>
int main()
{
    float l1, l2, g1, g2, d;
    printf("Enter values of latitude L1 and L2: ");
    scanf("%f %f", &l1, &l2);
    printf("Enter values of longitude G1 and G2: ");
    scanf("%f %f", &g1, &g2);
    d = 3963*acos((sin(l1)*sin(l2))+cos(l1)*cos(l2)*cos(g2-g1));
    printf("The distance in Nautical Miles = %f", d);
}