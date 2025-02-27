//reverse an array

#include <stdio.h>
int main()
{
    int i=0; char choice;
    int arr[1000];
    do
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &arr[i]);
        i++;
        printf("Continue? y/n: ");
        scanf(" %c", &choice); 
    } while (choice=='y' || choice == 'Y');
    int count = i;


    printf("\nReversed Array: ");
    for(i=count-1; i>=0 ; i--)
        printf("%d ", arr[i]);
    return 0;
}