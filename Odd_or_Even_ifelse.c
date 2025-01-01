/*WAP to find if an integer is odd number or even number*/

#include <stdio.h>
int main()
{
    int x;
    printf("Enter any integer: ");
    scanf("%d", &x);
    if (x%2 == 0)
        printf("It is an even number.");
    else
        printf("It is an odd number");
}