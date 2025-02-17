#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	/* if (n%5==0 && n%8==0)
		printf("Both");
	else if (n%5==0 && n%8!=0)
		printf("by 5 only");
	else if (n%5!=0 && n%8==0)
		printf("by 8 only");
	else 
		printf("neither"); */
		
	//by ternary
	n%5==0 ? n%8==0 ? printf("both") : printf("only 5") : n%8==0 ? printf("only 8") : printf("neither");
	
    return 0;
}

