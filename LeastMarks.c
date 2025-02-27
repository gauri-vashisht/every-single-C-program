//print roll number of student having least marks

#include <stdio.h>
int main()
{
    int i=0, count, rollno=0;
    int marks[100];
    char choice;
    do
    {
        printf("\nEnter Marks of student %d: ", i+1); 
        scanf("%d",&marks[i]);
        i++;
        printf("Go to next student? y/n: ");
        scanf(" %c", &choice); 
        
    }while (choice=='y' || choice=='Y');

    count = i;
    int least = marks[0];
    for(i=0 ; i<count ; i++)
    {
        if(marks[i]<least)
        {
            least=marks[i];
            rollno=i+1;
        }
    }
    printf("\n Least marks is of student having roll number %d", rollno);
    return 0;
}