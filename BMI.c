//find BMI and report the category

#include <stdio.h>
int main()
{
    float h, w, bmi;
    printf("Enter height and weight (m, kg): "); 
    scanf("%f%f", &h, &w);
    bmi=w/(h*h);

    if ( bmi < 15 )
        printf("BMI is %.2f - Starvation", bmi);
    else if ( 15.1 < bmi < 17.5 )
        printf("BMI is %.2f - Anorexic", bmi);
    else if (17.6 < bmi < 18.5 )
        printf("BMI is %.2f - Underweight", bmi);
    else if ( 18.6 < bmi < 24.9 )
        printf("BMI is %.2f - Ideal", bmi);
    else if ( 25 < bmi < 25.9 )
        printf("BMI is %.2f - Overweight", bmi);
    else if ( 30 < bmi < 30.9 )
        printf("BMI is %.2f - Obese", bmi);
    else if ( bmi >= 40 )
        printf("BMI is %.2f - Morbidly Obese", bmi);
    
    return 0;
}