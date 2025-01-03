/*WAP to determine whether driver should be insured or not
- if driver is unmarried, female, above 25 years age
- if driver is unmarried, male, above 30 years age
- if driver is married*/

#include <stdio.h>
int main()
{
    int age; char gender; char ms;
    printf("Enter age of driver, marital status (U Or M), gender (M or F)");
    scanf("%d %c %c", &age, &ms, &gender);
    
    if ( gender == 'F' && age > 25 && ms == 'M' || gender == 'M' && ms == 'M' || gender == 'M' && ms == 'U' && age > 30)
        printf("Insured.");
    else
        printf("Not Insured.");
    
}