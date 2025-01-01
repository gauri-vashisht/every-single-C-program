/*WAP to calculate sum of digits of 5 digit number*/

#include <stdio.h>
int main()
{
    int number, first, second, third, fourth, fifth, sum;
    printf("Enter a five digit number: ");
    scanf("%d", number);
    first = number%10; number = number/10;
    second = number%10; number = number/10;
    third = number%10; number = number/10;
    fourth = number%10; number = number/10;
    fifth = number%10; number = number/10;

    printf("Sum = %d", first+second+third+fourth+fifth);
}