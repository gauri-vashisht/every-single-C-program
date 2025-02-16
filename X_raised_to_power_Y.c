/*WAP To find the value of one number raised to the power of another number*/

#include <stdio.h>
int main()
{
    int i, num1, num2, value;
    printf("Enter the first number: "); scanf("%d", &num1);
    printf("Enter the second number: "); scanf("%d", &num2);
    i = value = 1;
    while ( i <= num2 )
    {
        value = value*num1;
        i++;
    }
    printf("%d to the power %d is %d", num1, num2, value);
}
