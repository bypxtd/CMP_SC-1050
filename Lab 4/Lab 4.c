// Bruce Phommaly
// bypxtd
// Lab 4
// 02/19/15
// Loops and conditional statments

#include <stdio.h>
#include <math.h>

int main (void)
{
	float annual, net, tax, max, min, average, taxcounter;
	int base, totaltaxrate, sentinel, counter;

// initial
	counter = 1;

// input
	printf("Enter the annual income: ");
	scanf("%f", &annual);
	while (annual <= 0)
	{
		printf("Invalid income, enter the income again: ");
		scanf("%f", &annual);
	}

	printf("Enter the base tax rate: ");
	scanf("%d", &base);
	while (base < 10 | base > 30)
	{
		printf("Invalid tax rate, enter the tax rate again: ");
		scanf("%d", &base);
	}

	printf("------------------------------------------\n");

// additional tax rate on income
	if (annual >= 0 && annual < 50000)
	{
		totaltaxrate = base;
	}
		else if (annual >= 50000 && annual < 100000)
		{
			totaltaxrate = base + 10;
		}
			else if (annual >= 100000 && annual < 250000)
			{
				totaltaxrate = base + 20;
			}
				else if (annual >= 250000 && annual < 500000)
				{
					
					totaltaxrate = base + 25;
				}
					else 
					{
						totaltaxrate = base + 30;
					}

// equations
	tax = (float) (annual * totaltaxrate) / 100;
	net = (float) annual - (annual * totaltaxrate) / 100;
	max = tax;
	min = tax;
	taxcounter = taxcounter + tax;
	average = (float) taxcounter / counter;

// output
	printf("Your tax rate is %d%\n", totaltaxrate);
	printf("You pay $%.2f in taxes. \n", tax);
	printf("After taxes your net income is: $%.2f\n", net);

	printf("\nDo you want to continue (0:exit 1:continue): ");
	scanf("%d", &sentinel);

	if (sentinel == 0)
	{
		printf("\nThe highest tax paid is %.2f\n", max);
		printf("The lowest tax paid is %.2f\n", min);
		printf("The average tax paid is %.2f\n", average);
	}

// loop
	sentinel = 1;
	while (sentinel != 0)
	{
		counter = counter +1;

// input
	printf("Enter the annual income: ");
	scanf("%f", &annual);
	while (annual <= 0)
	{
		printf("Invalid income, enter the income again: ");
		scanf("%f", &annual);
	}

	printf("Enter the base tax rate: ");
	scanf("%d", &base);
	while (base < 10 | base > 30)
	{
		printf("Invalid tax rate, enter the tax rate again: ");
		scanf("%d", &base);
	}

	printf("------------------------------------------\n");

// additional tax rate on income
	if (annual >= 0 && annual < 50000)
	{
		totaltaxrate = base;
	}
		else if (annual >= 50000 && annual < 100000)
		{
			totaltaxrate = base + 10;
		}
			else if (annual >= 100000 && annual < 250000)
			{
				totaltaxrate = base + 20;
			}
				else if (annual >= 250000 && annual < 500000)
				{
					totaltaxrate = base + 25;
				}
					else
					{
						totaltaxrate = base + 30;
					}

//equations
	tax = (float) (annual * totaltaxrate) / 100;
	net = (float) annual - (annual * totaltaxrate) / 100;
	
	if (tax > max)
	{
		max = tax;
	}
		else if (tax < min)
		{
			min = tax;
		}
	taxcounter = (float) taxcounter + tax;
	average = (float) taxcounter / counter;

// output
	printf("Your tax rate is %d%\n", totaltaxrate);
	printf("You pay $%.2f in taxes.\n", tax);
	printf("After taxes your net income is: $%.2f\n", net);
		
	printf("\nDo you want to continue (0:exit 1:continue): ");
	scanf("%d", &sentinel);

// highest tax
	
	if (sentinel == 0)
		printf("\nThe highest tax paid is %.2f\n", max);
		printf("The lowest tax paid is %.2f\n", min);
		printf("The average tax paid is %.2f\n", average);
	}

	return 0;
}

