/*WAP to practice math functions such as sin(), cos(), log(), pow(), sqrt() etc. 
by including <math.h> header file.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    printf("Provide a value to perform functions on: ");
    scanf("%f", &x);
    printf("Sin = %f\n", sin(x));
    printf("Cos = %f\n", cos(x));
    printf("Log = %f \n", log(x));
    printf("Absolute Value = %f \n", fabs(x));
    printf("Ceiling = %f \n", ceil(x));
    printf("Floor = %f \n", floor(x));
    printf("Square root = %f\n", sqrt(x));
    float a,b;
    printf("Provide two values for power function: ");
    scanf("%f %f",&a,&b);
    printf("Pow = %f\n", pow(a,b));
}
