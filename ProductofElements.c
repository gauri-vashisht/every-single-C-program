#include <stdio.h>
int main()
{
    int i=0, arr[100], prod=1;
    char choice;
    do
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &arr[i]);
        i++;
        printf("Continue? y/n: ");
        scanf(" %c", &choice);
    } while (choice=='y' || choice=='Y');

    int count=i;        
    for(i=0 ; i<count ; i++)
        prod*=arr[i];
    printf("\nProduct of elements = %d", prod);
    return 0;
}