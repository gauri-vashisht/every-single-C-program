//count the number of elements in an array greater than x

#include <stdio.h>
int main()
{
    int arr[100], i=0, count, x, countx;
    char choice;
    do
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &arr[i]);
        i++;
        printf("Continue? y/n: ");
        scanf(" %c", &choice);
    } while(choice=='y' || choice=='Y');
   

    printf("\nEnter an element x from array: ");
    scanf("%d", &x);

    count=i;
    for(i=0 ; i<count ; i++)
    {
        if(arr[i]>x)
            countx++;
    } 
    printf("\nNo of elements greater than x = %d", countx);
    return 0;
}

    