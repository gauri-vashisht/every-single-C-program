/*WAP to find the factorial value of any number entered through the keyboard*/

#include <stdio.h>
int main()
{
    int i, number, factorial;
    printf("Enter any number: ");  
    scanf("%d", &number);
    i=factorial=1;
    while ( i<= number )
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of the given number = %d", factorial);
}