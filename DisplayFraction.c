#include <stdio.h>
int main(){
    printf("\n Program to display fraction as it is \n");

    int num, denom;
    printf("\n Enter numerator and denominator (ints): ");
    scanf("%d%d", &num, &denom);

    printf("\n \t Fraction = %d/%d", num, denom);

    return 0;}