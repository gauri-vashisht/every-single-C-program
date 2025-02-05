#include <stdio.h>
int main(){
    printf("\n Simple Calculator program (+,-,*,/,mod) \n");

    int n1, n2;
    printf("\n Enter two integers: ");
    scanf("%d%d", &n1, &n2);

    printf("\n \t %d + %d = %d", n1, n2, n1+n2); //add
    printf("\n \t %d - %d = %d", n1, n2, n1-n2); //subtract
    printf("\n \t %d x %d = %d", n1, n2, n1*n2); //multiply
    printf("\n \t %d / %d = %.2f", n1, n2, (float)n1/n2); //divide
    printf("\n \t %d mod %d = %d", n1, n2, n1%n2); //modulus

    return 0;}