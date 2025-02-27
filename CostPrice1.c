//total sp of 15 items and total profit is given, find cp of one item

#include <stdio.h>
int main()
{
    float p, sp, cp;
    printf("Enter sp of 15 items and profit: ");
    scanf("%f%f", &sp, &p);
    cp=sp-p;
    cp/=15;
    printf("CP of one item = %.2f", cp);
    return 0;
}