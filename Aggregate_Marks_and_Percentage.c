/*find aggregate marks and percentage*/

#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5, agg; float per;
    printf("Enter the marks obtained in 5 subjects: \n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    agg = m1+m2+m3+m4+m5;
    per = agg/5;
    printf("The aggregate marks = %d \n", agg);
    printf("The percentage obtained = %f", per);
}