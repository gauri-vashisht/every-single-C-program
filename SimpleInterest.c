#include <stdio.h>
int main(){
    printf("\n Simple Interest Calculator \n");

    float p, r, t, si;
    printf("\n Enter principal, rate, time: ");
    scanf("%f%f%f", &p, &r, &t);

    si = (p*r*t)/100;
    printf("\n \t Simple Interest = %.2f", si);

    return 0;}