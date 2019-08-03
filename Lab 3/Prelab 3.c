#include <stdio.h>

int main (void)
{
	int x;

	printf("Enter a positive number: ");
	scanf("%d", &x);

	while (x < 0 | x > 100)
	{
		printf("Number should be a positive enter the number again: ");
		scanf("%d", &x);
	}

	printf("The positive number entered is %d\n", x);

	return 0;
}
