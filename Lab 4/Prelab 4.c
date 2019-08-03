#include <stdio.h>

int main (void)
{
	int x, y;

	printf("Enter a positive number: \n");
	scanf("%d", &x);

	while (x <= 0)
	{
		printf("Number should be positive enter the number again: \n");
		scanf("%d", &x);
	}

	printf("The positive number entered is %d\n", x);

	printf("Enter a number (0 to exit): \n");
	scanf("%d", &y);
	printf("The number entered is %d\n", y);

	while (y != 0)
	{
		printf("Enter a number (0 to exit): \n");
		scanf("%d", &y);
		printf("The number entered is %d\n", y);
	}

	if (y == 0)
	{
		printf("Exiting the program\n");
	}


	return 0;
}
