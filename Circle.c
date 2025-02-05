#include <stdio.h>
int main(){ 
    printf("\n Area and Perimeter of circle \n");

    float radius, area, perim;
    printf("\n Enter Radius: ");
    scanf("%f", &radius);

    area = 3.14159*radius*radius;
    perim = 2*3.14159*radius;
    printf("\n \t Area = %.2f \n \t Perimeter = %.2f", area, perim);

    return 0;}