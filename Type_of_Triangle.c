/*WAP to check if triangle is isosceles, equilateral, scalene, or right triangle*/

#include <stdio.h>
#include <math.h>
int main()
{
    int side1, side2, side3, largest;
    printf("Enter the three sides: ");
    scanf("%d" "%d" "%d", &side1, &side2, &side3);

    if ( side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2 )
        {
        if ( side1 == side2 && side2 == side3 )
            printf("Equilateral Triangle");
        else if ( side1 == side2 || side2 == side3 || side1 == side3 )
            printf("Isosceles Triangle"); 
        else if ( pow(side1,2) == pow(side2,2)+pow(side3,2) || pow(side2,2) == pow(side1,2)+pow(side3,2) || pow(side3,2) == pow(side2,2)+pow(side1,2) )
            printf("Right Triangle");
        else
            printf("Scalene Triangle");
        }
    else
        printf("Invalid Triangle");
}