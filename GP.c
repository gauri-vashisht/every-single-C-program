//print this GP upto n terms 1 2 4 8 16 ...

#include <stdio.h>
int main()
{
    int gp[1000], n, term1=1, i;
    gp[0]=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        gp[i]=2*term1;
        term1*=2;
    }
    for(i=0 ; i<n ; i++)
        printf("%d ", gp[i]);
    return 0;
}