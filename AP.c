//display ap 1,3,5,7,9...upto 'n' terms

#include<stdio.h>
int main()
{
    int ap[1000], n, term1=1;
    printf("Till how many terms you wish to print? ");
    scanf("%d", &n);
    ap[0]=1;
    for(int i=1 ; i<=n ; i++)
    {
        ap[i]=term1+2;
        term1+=2;
    }
    for(int i=0 ; i<n ; i++)
        printf("%d ", ap[i]);
    return 0;
}