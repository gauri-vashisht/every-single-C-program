/*WAP to Interchange two numbers C and D*/

#include <stdio.h>
#include <math.h>
int main()
{
    int c,d,e;
    printf("Enter a number 'c': "); scanf("%d", &c);
    printf("Enter a number 'd': "); scanf("%d", &d);
    e=c;
    c=d; 
    printf("New value of c: %d\n", d);
    printf("New value of d: %d", e);   
}