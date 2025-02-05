#include <stdio.h>
#include <math.h>
int main(){ 
    printf("\n Program to find Nth root of a number \n");

    float num, n, root;
    printf("\n Enter a number and n: ");
    scanf("%f%f", &num, &n);

    root = pow(num, 1/n);
    printf("\n \t Answer = %.2f", root);

    return 0;}