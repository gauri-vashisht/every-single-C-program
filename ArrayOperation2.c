//difference between sum of elements at even indices to the sum of elements at odd indices

#include <stdio.h>
int main()
{
    int i=0, count, arr[100]; char choice;
    int sume=0, sump=0;
    do
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &arr[i]); fflush(stdin);
        i++;
        printf("Continue? y/n: ");
        scanf(" %c", &choice); 
    } while (choice=='y' || choice=='Y');

    count=i;
    
    for(i=0 ; i<count ; i++)
    {
        if(i%2==0)
            sume+=arr[i];
        else
            sump+=arr[i];
    }
    printf("\nDifference = %d", sume-sump);
    return 0;
} 