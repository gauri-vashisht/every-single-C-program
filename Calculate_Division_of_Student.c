/*WAP to calculate division obtained by student on basis of marks
percentage above or equal to 60 - first division
percentage between 50 and 59 - second division
percentage between 40 and 49 - third division
perentage less than 40 - fail*/

#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, per;
    printf("Enter marks obtained in 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    per = (m1 + m2 + m3 + m4 + m5)/5;
    printf("Percentage obtained = %d \n", per);

    if ( per >= 60 )
        printf("First Division");
    else if ( 50 < per < 59)
        printf("Second Division");
    else if ( 40 < per < 49)
        printf("Third Division");
    else
        printf("Fail");
}