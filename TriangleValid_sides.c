//triangle valid via sides

#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter 3 sides: ");
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 < s2+s3 && s2 < s3+s1 && s3 < s2+s1)
        printf("Triangle is valid.");
    else   
        printf("Triangle is invalid.");
    return 0;
}