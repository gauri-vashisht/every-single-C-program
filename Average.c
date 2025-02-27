//average of n numbers

#include <stdio.h>
int main()
{
    int i=0;
    char yn;
    float num[1000], avg, sum=0;
    do
    {
        printf("Enter number: ");
        scanf("%f", &num[i]);
        sum+=num[i];
        i++;
        printf("Continue? (y/n): ");
        scanf(" %c", &yn);
        
    } while(yn=='y' || yn=='Y');
    if(i>1)
    {
        avg = sum/i;
        printf("Average = %.2f", avg);
    }
    else
        printf("Enter more than 1 number!");
    return 0;   
}