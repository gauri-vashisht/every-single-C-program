/*WAP to check if sum of all three angles in triangle is 180 degree*/

#include <stdio.h>
int main()
{
    float angle1, angle2, angle3;
    printf("Enter all three angles of triangle: "); 
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    float sum = angle1 + angle2 + angle3;
    
    if ( sum == 180 )
        printf("Triangle is Valid.");
    else 
        printf("Triangle is Invalid.");
}