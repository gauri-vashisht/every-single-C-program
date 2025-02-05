#include <stdio.h>
int main(){
    printf("\n Simple Interest Calculator \n");

    int p, t;
    float r, si;
    printf("\n Enter principal, rate, time: ");
    scanf("%d%f%d", &p, &r, &t);

    si = (p*r*t)/100;
    printf("\n \t Simple Interest = %.2f", si);

    return 0;}