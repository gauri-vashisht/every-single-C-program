/*WAP to check if three points lie on straight line*/

#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter x1, y1, x2, y2, x3, y3: "); 
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    
    float area = (1/2)*(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    if ( area == 0)
        printf("They lie on straight line.");
    else
        printf("They do not lie on straight line");
}