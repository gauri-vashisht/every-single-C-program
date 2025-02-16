/*Reverse a 5 digit number*/

#include <stdio.h>
int main() 
{
    int x, first, second, third, fourth, fifth, rev;
    printf("Enter a Five Digit Number: ");
    scanf("%d", &x);
    first = x%10; x = x/10;   /*Obtain 5th digit, then divide the number by 10 to make it 4 digits*/
    second = x%10; x = x/10;    /*Obtain 4th digit, then divide the number by 10 to make it 3 digits*/
    third = x%10; x = x/10;     /*Obtain 3rd digit, then divide the number by 10 to make it 2 digits*/
    fourth = x%10; x = x/10;    /*Obtain 2nd digit, then divide the number by 10 to make it 1 digit*/
    fifth = x%10; x = x/10;     /*Obtain 1st digit*/
    rev = first*10000 + second*1000 + third*100 + fourth*10 + fifth;
    printf("The reversed number is: %d", rev);
}