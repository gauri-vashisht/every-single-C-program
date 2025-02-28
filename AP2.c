//print this AP upto n terms 4 7 10 13 16...

#include <stdio.h>
int main()
{
    int ap[1000], n, term1=4;
    printf("Till how many terms you wish to print AP: ");
    scanf("%d", &n);
    ap[0]=4;
    for(int i=1 ; i<=n ; i++)
    {
        ap[i]=term1+3;
        term1+=3;
    }
    for(int i=0 ; i<n ; i++)
        printf("%d ", ap[i]);
    return 0;
}