#include <stdio.h>
#include <math.h>

int check_number(int);
float power(float, int);

int main (void)
{
	float x1;
	int n1;

	printf("Enter a number: \n");
	scanf("%f", &x1);
	
	printf("Enter an exponent: \n");

	check_number(n1);
	power(x1, n1);

	return 0;
}

int check_number (int n2)
{
	scanf("%d", &n2);
	if (n2 > 0)
	{
		return 1;
	}
		else
		{
			printf("Incorrect exponent enter the exponent again: \n");
			scanf("%d", &n2);
			return 0;
		}
}

float power (float x2, int n2)
{
	float product;
	product = pow(x2, n2);
	printf("pow(%.2f,%d)=%.2f\n", x2, n2, product);
}
