/*WAP to find out if area of rectangle is greater than its perimeter*/

#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    int area = length * breadth;
    int perim = 2*(length + breadth);
    printf("Perimeter = %d \n", perim);
    printf("Area = %d \n", area);

    if ( area > perim )
        printf("Area is greater than perimeter.");
    if ( area == perim )
        printf("Area is Equal to perimeter.");
    if ( area < perim )
        printf("Area is less than perimeter.");
}