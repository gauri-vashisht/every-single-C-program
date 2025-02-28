//print maximum value in array

#include <stdio.h>
int main()
{
    int arr[100]; int i=0; char choice; 

    do
    {
        printf("\nEnter element %d: ", i+1); 
        scanf("%d", &arr[i]); 
        i++;
        printf("Continue? y/n: "); 
        scanf(" %c", &choice);
    } while(choice=='y' || choice=='Y');
    
    int count=i;
    int max=arr[0];
    for(i=0 ; i<count ; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("\nMaximum value = %d", max);
    return 0;
}
