/*WAP that receives height and weight, calculates BMI and Reports the category*/

#include <stdio.h>
#include <math.h>
int main()
{
    float height, weight, bmi;
    printf("Enter Height in meters: ");  scanf("%f", &height);
    printf("Enter weight in kilos: ");  scanf("%f", &weight);

    bmi = weight / pow(height, 2);
    printf("BMI of person: %f\n", bmi);

    if ( bmi < 15 )
        printf("Starvation");
    else if ( 15.1 < bmi < 17.5 )
        printf("Anorexic");
    else if (17.6 < bmi < 18.5 )
        printf("Underweight");
    else if ( 18.6 < bmi < 24.9 )
        printf("Ideal");
    else if ( 25 < bmi < 25.9 )
        printf("Overweight");
    else if ( 30 < bmi < 30.9 )
        printf("Obese");
    else if ( bmi >= 40 )
        printf("Morbidly Obese");
    
}