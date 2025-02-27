//average marks obtained by 10 students in a test

#include <stdio.h>
int main()
{
    int marks[10], sum=0, i;
    
    for(i=0 ; i<10 ; i++)
    {
        printf("Enter marks obtained by student: ");
        scanf("%d", &marks[i]);
        sum+=marks[i];
    }
    float avg = sum/i;
    printf("Average = %.2f", avg);
    return 0;
}