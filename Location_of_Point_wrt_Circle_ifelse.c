/*WAP to determine whether point lies inside circle, on circle or outside circle*/

#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, radius, a, b;
    printf("Enter coordinates of center and radius "); scanf("%d %d %d", &x, &y, &radius);
    printf("Enter coordinates of any point: "); scanf("%d %d", &a, &b);
    float dist = sqrt(pow((x-a), 2) - pow((y-b), 2));

    if ( dist == radius )
        printf("Point lies on the circle.");
    if ( dist > radius )
        printf("Point lies outside the circle.");
    if ( dist < radius )
        printf("Point lies inside the circle.");
}