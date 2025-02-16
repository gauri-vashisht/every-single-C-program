/*Area of triangle given its three sides*/

#include <stdio.h>
#include <math.h>
int main()
{
   int side1, side2, side3, x, area;
   printf("Enter each side of the triangle followed by space: \n");
   scanf("%d %d %d", &side1, &side2, &side3);
   x = (side1 + side2 + side3)/2;
   area = sqrt(x*(x-side1)*(x-side2)*(x-side3));
   printf("Area of Triangle = %d", area);
}