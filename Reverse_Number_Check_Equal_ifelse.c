/*WAP to reverse a 5 digit number and check if reversed number = original number*/

#include <stdio.h>
int main()
{
    int x, first, second, third, fourth, fifth, rev;
    printf("Enter a 5 digit number: "); scanf("%d", &x);
    
    first = x%10; x = x/10;       
    second = x%10; x = x/10;    
    third = x%10; x = x/10;     
    fourth = x%10; x = x/10;
    fifth = x%10; x = x/10;     
    rev=first*10000+second*1000+third*100+fourth*10+fifth;
    printf("The reversed number is: %d", rev);
    x = fifth*10000 + fourth*1000 + third*100 + second*10 + first;

    if ( x == rev )
        printf("\nReversed number and original number are equal.");
    else
        printf("\nReversed number and original number ARE NOT equal");
}