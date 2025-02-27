//is triangle valid, check by angles

#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three angles: ");
    scanf("%d%d%d", &x, &y, &z);
    int sum = x+y+z;
    (sum == 180) ? printf("Valid Triangle") : printf("Invalid Triangle") ;
    return 0;
}