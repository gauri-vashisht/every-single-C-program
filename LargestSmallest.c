//find largest and smallest in array

#include <stdio.h>
int main()
{
    int a[10], i=0;
    while(i<10)
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
        i++;
    }
    for(i=0 ; i<10 ; i++)
        printf("%d ", a[i]);  //print array
    
    int largest, smallest = a[0];
    for(i=0 ; i<10 ; i++)
    {
        if(a[i]>largest)
            largest=a[i];
        
        if(a[i]<smallest)
            smallest=a[i];
    }
    printf("Largest = %d \t Smallest = %d", largest, smallest);
    
    return 0;
}