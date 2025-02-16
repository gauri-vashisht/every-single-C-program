/*WAP to determine if year is leap year or not*/

#include <stdio.h>
int main()
{
    int year;
    printf("Input a year: "); scanf("&d", &year);
    if (year%4 == 0)
        printf("Leap year");
    else
        printf("Not a leap year");
}