/*WAP to find out if a point lies on x axis, y axis or origin*/

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter coordinates of a point"); scanf("%d %d", &x, &y);

    if ( x == 0 && y != 0)
        printf("Point lies on Y-Axis.");
    if ( y == 0 && x != 0 )
        printf("Point lies on X-Axis.");
    if ( x == 0 && y == 0)
        printf("Point lies on origin.");
}