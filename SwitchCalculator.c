#include <stdio.h>
int main()
{
    char op, choice;
    float a, b;
    do
    {
        printf("Enter two numbers: ");
        scanf("%f%f", &a, &b); fflush(stdin);
        printf("Enter operator: ");
        scanf("%c", &op); fflush(stdin);
        switch(op) 
        {
            case '+': printf("a + b = %.2f", a+b); break;
            case '-': printf("a - b = %.2f", a-b); break;
            case '*': printf("a * b = %.2f", a*b); break;
            case '/': printf("a / b = %.2f", a/b); break;
            default: printf("INVALID"); break;
        }
        printf("\nContinue? y/n: ");
        scanf("%c", &choice);
    } while(choice=='y' || choice=='Y');
    return 0;
}