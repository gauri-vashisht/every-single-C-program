/*WAP to check if a character is capital letter, lowercase, digit or symbol*/

#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);
    
    if ( c>=65 && c<=90)
        printf("Capital Letter \n");
    if ( c>=97 && c<=122 )
        printf("Lower case letter \n");
    if ( 48<=c && c<=57 )
        printf("Digit\n");
    if ( 0<=c && c<=47 || 58<=c && c<=64 || 91<=c && c<=96 || 123<=c && c<=127 )
        printf("Special symbol\n");
}