//print all the positive terms from AP 100, 97, 94 ...

#include <stdio.h>
int main()
{
    int ap[1000], i, term=100;
    ap[0]=100;
    for(i=1 ; term>0 ; i++)
    {
        ap[i]=term-3;
        term-=3;
    } 
    int count=i-1;
    for(i=0 ; i<count ; i++)
        printf("%d ", ap[i]);
    return 0;
}