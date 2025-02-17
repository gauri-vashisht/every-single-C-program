#include <stdio.h>
int main()
{
	int r,s,a,y;
	printf("Enter age of Ram: ");
	scanf("%d", &r);
	printf("Enter age of Shyam: ");
	scanf("%d", &s);
	printf("Enter age of Ajay: ");
	scanf("%d", &a);
	
	y = (r<=s) ? (r<=a) ? r : a : (s<=a) ? s : a ;
	
	
	if (y==r)
		printf("Ram is youngest \n");
	if (y==a)
		printf("Ajay is youngest \n");
	if (y==s)
		printf("Shyam is youngest \n");
	
	
    return 0;
}

