/*WAP to find Nth root of a number.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    printf("Enter a number: \n");
    scanf("%f", &a);
    printf("Enter a root(n): \n");
    scanf("%f", &b);
    printf("The result: %f", pow(a,b));
}