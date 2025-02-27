//change value of odd indexed elements to its second multiple and increment all even indexed values by 10

#include <stdio.h>
int main()
{
    int i=0, count, arr[100]; char choice;
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
            arr[i]+=10;
        else
            arr[i]*=2;
    }
    
    for(i=0 ; i<count ; i++)
        printf("%d ", arr[i]);

    return 0;
}
