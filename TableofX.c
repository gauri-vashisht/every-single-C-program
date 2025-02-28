//print the table of any number x

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(int i=0 ; i<10 ; i++)
        printf("\n%d x %d = %d", x, i+1, x*(1+i));
    return 0;
}