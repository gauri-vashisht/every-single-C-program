/*WAP to print all ASCII values and their equivalent characters using while loop 0-255*/

#include <stdio.h>
int main()
{
    int i = 0;

    while ( i <= 225 )
    {
        printf("ASCII Value %d Character %c \n", i, i);
        i++;
    }   
}