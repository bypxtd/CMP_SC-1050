// Bruce Phommaly
// bypxtd
// Lab 6
// 03/10/15
// Functions in the implementation

#include <stdio.h>

void display_menu();
int check_option(int);
int check_year(int);
int check_amount(float);
float power(float, int);

int main (void)
{
	int a, b, e;
	float amount, interest, c, d;
	
	d = (1 + (1 / 100));

	amount = c * d;
	interest = amount - c;

	display_menu();
	check_option(a);
	check_year(b);
	check_amount(c);
	power(d, e);

	printf("Total amount after %d years at the interest rate of %d% is %.2f\n", b, a, amount);
	printf("Total interest earned in %d years on the amount %.2f is %.2f\n", b, amount, interest);

	return 0;
}

void display_menu ()
{
	printf("Bank account type\n\n");
	printf("(1) Checking\n");
	printf("(2) Saving\n");
	printf("(3) Fixed Deposit\n\n");
}

int check_option (int v)
{
	int v2[4] = {0, 1, 3, 7};
	printf("Please make a selection: ");
	scanf("%d", &v);
	while (v < 1 || v > 3)
	{
		printf("Incorrect choice enter the number again: ");
		scanf("%d", &v);
		return 0;
	}
		if (v >= 1 && v <= 3)
		{
			return 1;
		}
}

int check_year (int w)
{
	printf("Enter the year: ");
	scanf("%d", &w);
	while (w < 1 || w > 10)
	{
		printf("Incorrect year enter the year again: ");
		scanf("%d", &w);
		return 0;
	}
		if (w >= 1 && w <= 10)
		{
			return 1;
		}
}

int check_amount (float x)
{
	printf("Enter the amount: ");
	scanf("%f", &x);
	while (x <= 0)
	{
		printf("Incorrect amount enter the amount again: ");
		scanf("%d", &x);
		return 0;
	}
		if (x > 0)
		{
			return 1;
		}
}

float power (float y, int z)
{
	for (z = 1; z < y; z++);
	{
		 y = y * z;
	}	 
}
