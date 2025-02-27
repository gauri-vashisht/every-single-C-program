//even or odd via ternary operator

#include <stdio.h>
int main()
{
    int a;
    int rem;
    printf("Enter a number: ");
    scanf("%d", &a);
    rem=a%2;
    (rem == 0) ? printf("Even") : printf("Odd") ;
    return 0;
}