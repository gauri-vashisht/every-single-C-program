/*WAP to determine profit or loss*/

#include <stdio.h>
int main()
{
    float sp, cp;
    printf("Enter Cost price of item: ");
    scanf("%f", &cp);
    printf("Enter Selling price of item: ");
    scanf("%f", &sp);
    if (sp > cp)
        printf("Seller has made profit = %f\n", sp - cp);
    if (cp > sp)
        printf("Seller has made loss = %f \n", cp - sp);
    if (cp == sp)
        printf("No loss nor profit");
}