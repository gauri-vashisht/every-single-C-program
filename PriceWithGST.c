//enter price of x items and print their final cost with gst

#include <stdio.h>
int main()
{
    int n;
    float price, final;
    printf("How many items? ");
    scanf("%d", &n);
    float prices[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter price of item: ");
        scanf("%f", &prices[i]);
        prices[i]=(prices[i]*0.18)+prices[i];
        final+=prices[i];
    }
    printf("Amount after GST for all items = %.2f Rupees", final);
    return 0;
}