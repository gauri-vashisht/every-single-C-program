/*WAP to check if triangle if valid, if lengths of three sides are entered,
sum of two sides must be greater than the largest side*/

#include <stdio.h>
int main()
{
    int side1, side2, side3, largest;
    printf("Enter lengths of three sides of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ( side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2 )
        printf("Triangle is Valid.");
    else
        printf("Triangle is invalid.");
}