#include<stdio.h>

int main (void)
{
	int x, y, sum, product;

	printf("Enter the first number: \n");
	scanf ("%d", &x);

	if (x <= 0)
	{
		printf("No negative numbers please!\n");
		printf("Enter a new value: \n");
		scanf("%d", &x);
	}

	printf("Enter the second number: \n");
	scanf("%d", &y);

	if (y <= 0) 
	{
		printf("No negative numebrs please!\n");
		printf("Enter a new value: \n");
		scanf("%d", &y);
	}
	
	sum = x + y;
	printf("ADDITION \n");
	printf("The sum of %d and %d is %d\n", x, y, sum, x + y);

	printf("MULTIPLICATION \n");
	product = x * y;
	printf("The product of %d and %d is %d\n", x, y, product, x * y);


	return 0;
}
