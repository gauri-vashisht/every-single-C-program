//find the cube of a number

#include <stdio.h>
int main()
{
    float n, cube;
    printf("Enter number: ");
    scanf("%f", &n);
    printf("Cube of %.2f = %.2f", n, n*n*n);
    return 0;
}