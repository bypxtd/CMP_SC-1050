// Bruce Phommaly
// bypxtd
// Lab 2
// 02/03/15
// Conditional statements and arithmetic operations

#include <stdio.h>
#include <math.h>

int main (void)

{
	int x, y, z, addition, subtraction, multiplication;
	float division, squareroot;

	printf("Enter the first number: \n");
	scanf("%d", &x);

	printf("Enter the second number: \n");
	scanf("%d", &y);

	addition = x + y;
	printf("ADDITION\n");
	printf("The sum of %d and % d is %d \n", x, y, addition);

	subtraction = x - y;
	printf("SUBTRACTION\n");
	printf("The differencea between %d and %d is %d \n", x, y, subtraction);
	
	multiplication = x * y;
	printf("MULTIPLICATION\n");
	printf("The product of %d and %d is %d \n", x, y, multiplication);

	while ( y == 0)
	{
		printf("Cannot divide by zero!\n");
		printf("Enter a new integer: \n");
		scanf("%d", &y);
	i}

	division = (float) x / y;
	printf("DIVISION\n");
	printf("The quotient of %d and %d is %.2f \n", x, y, division);

	printf("Enter a number for the square root operation: \n");
	scanf("%d", &z);

	while (z <= 0)
	{
		printf("Cannot take the square root of a negative number!\n");
		printf("Enter a new interger: \n");
		scanf("%d", &z);
	}
	
	squareroot = sqrt(z);
	printf("The square root of %d is %.2f \n", z, squareroot);

	return 0;
}
