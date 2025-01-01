/*WAP to find absolute value of number*/

#include <stdio.h>
int main()
{
    float number;
    printf("Enter a number: "); scanf("%f", &number);
    
    if ( number >= 0 )
        printf("Absolute Value = %f", number);
    else
        printf("Absolute Value = %f", -1*number);
}