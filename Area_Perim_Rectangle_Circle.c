/*area perim of rectangle and area circum of circle*/

#include <stdio.h>
int main()
{
    float length, breadth, radius, area, perim, areac, circum;
    printf("Enter length and breadth of rectangle, and radius of circle: \n");
    scanf("%f %f %f", &length, &breadth, &radius);
    area=length*breadth;
    perim=2*(length+breadth);
    circum=2*3.14*radius;
    areac=3.14*radius*radius;
    printf("The Area of Rectangle = %f \n", area);
    printf("The Perimeter of Rectangle = %f \n", perim);
    printf("The Area of Circle = %f \n", areac);
    printf("The Circumference of Circle = %f \n", circum);
}