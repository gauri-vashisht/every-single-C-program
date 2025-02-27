//find area of triangle by inputting sides

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter sides: ");
    scanf("%f%f%f", &a, &b, &c);

    if(a==0 || b==0 || c==0)
        printf("Invalid Input!");
    else
    {
        float s=(a+b+c)/2;
        float area=s*(s-a)*(s-b)*(s-c);
        area=sqrt(area);
        printf("Area = %.4f sq units", area);
    }
    return 0;   
}