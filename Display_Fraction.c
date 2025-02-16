/*WAP to input a fraction (rational number) and display.*/

#include <stdio.h>
int main()
{
    int num,denom;
    printf("Enter numerator and denominator separated by space: ");
    scanf("%d %d", &num, &denom);
    printf("%d ", num); printf("/ %d", denom);
}