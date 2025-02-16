/*Smallest number of notes that combine to give rs. N*/

#include <stdio.h>
int main()
{
    int amount, re1, re2, re5, re10, re50, re100;
    printf("Enter the Amount in Rupees: \n");
    scanf("%d", &amount);
    re100 = amount/100; amount = amount%100;
    re50 = amount/50; amount = amount%50;
    re10 = amount/10; amount = amount%10;
    re5 = amount/5; amount = amount%5;
    re2 = amount/2; amount = amount%2;
    re1 = amount/1; amount = amount%1;
    amount=re1+re2+re5+re10+re50+re100;
    printf("Smallest number of notes = %d \n", amount);
}