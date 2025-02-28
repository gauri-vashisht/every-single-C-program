//print minimum value in array

#include <stdio.h>
int main()
{
    int i=0, arr[100], count, least=arr[0]; char choice;
    do
    {
        printf("Enter element %d: ", i+1); 
        scanf("%d", &arr[i]);
        i++;
        printf("Continue? y/n: ");
        scanf(" %c", &choice);
    } while (choice=='y' || choice=='Y');

    count=i;
    for(i=0 ; i<count ; i++)
    {
        if(arr[i]<least)
        {
            least=arr[i];
        }
    }
    printf("Least value in array = %d", least);
    return 0;
}
