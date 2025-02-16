/*WAP to calculate total expense*/

#include <stdio.h>
int main()
{
    int qty,price;
    printf("Enter Price of single item: "); scanf("%d", &price);
    printf("Enter Quantity: "); scanf("%d", &qty);
    if (qty > 1000)
        printf("10 percent Discount applicable. Total expenses = %f", price*qty - 0.01*price*qty);
    else
        printf("No discount. Total expenses = %f", price*qty);
}