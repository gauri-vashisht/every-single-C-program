//check if armstrong number or not 

#include <stdio.h>
#include <math.h>
int main()
{
    int num, count=0, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp=num;
    while(temp>0)
    {
        count++;
        temp/=10;
    }
    temp=num;
    while(temp>0)
    {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++)
            power *= digit;
        sum+=power;
        temp/=10;
    }
    if(sum==num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not Armstrong number", num);
    return 0;
}