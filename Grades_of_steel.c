/*WAP which will require user to give values of hardness, carbon content and tensile 
strength of steel and output the grade of steel*/

#include <stdio.h>
int main()
{
    float hard, cc, ts;
    printf("Enter Hardness: ");  scanf("%f", &hard);
    printf("Enter Carbon content: ");  scanf("%f", &cc);
    printf("Enter Tensile strength: ");  scanf("%f", &ts);

    if ( hard>50 && cc<0.7 && ts>5600 )
        printf("Grade is 10");
    else if ( hard>50 && cc<0.7 )
        printf("Grade is 9");
    else if ( cc<0.7 && ts>5600 )
        printf("Grade is 8");
    else if ( hard>50 && ts>5600 )
        printf("Grade is 7");
    else if ( hard>50 || cc<0.7 || ts>5600 )
        printf("Grade is 6");
    else
        printf("Grade is 5");
}