#include <stdio.h>
int main()
{
    float r, g, b, c, m, y, k, w;
    printf("Enter Red value: ");  scanf("%f", &r);
    printf("Enter Green value: ");  scanf("%f", &g);
    printf("Enter Blue value: ");  scanf("%f", &b);

    r /= 255;  g /= 255;  b /= 255;

    w = r;
    if ( r < g )
        w = g;
    if ( r < b )
        w = b;
    
    if ( r==0 && g==0 && b==0 )
        printf("Cyan = 0\n Magenta = 0\n Yellow = 0\n Black = 1\n");
    else
    {
        c = (w-r)/w;  m = (w-g)/w;  y = (w-b)/w;  k = 1-w;
        printf("Cyan = %f\n", c*100);
        printf("Magenta = %f\n", m*100);
        printf("Yellow = %f\n", y*100);
        printf("Black = %f", k*100);
    }
}