// Bruce Phommaly
// bypxtd
// Homework 4
// 04/29/15
// File processing and malloc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int load_data(char *, int *, float *);
void print_data(int, int *, float *);
int highest_amount(float *, int);
int lowest_amount(float *, int);
float average_amount(float *, int);
int write_data(char *, int *, float *, int, int, int, float);

int main (int argc, char **argv)
{
	if(argc != 4)
	{
		printf("\nInsufficient arguments\n");
		return 0;
	}

	int n = atoi(argv[2]);

	int *account;
	float *amount;

	account = malloc(sizeof(int) * n);
	amount = malloc(sizeof(float) * n);
	int size = load_data(argv[1], account, amount);

	if(size == 0)
		{
			printf("\nUnable to open the input file\n");
			return 0;
		}

	print_data(n, account, amount);

	int index = highest_amount(amount, n);
	printf("\nThe highest amount is $%.2f in the account number %d\n", *(amount + index), *(account + index));

	int index2 = lowest_amount(amount,n);
	printf("The lowest amount is $%.2f in the account number %d\n", *(amount + index2), *(account + index2));

	float average = average_amount(amount, n);
	printf("The average amount is $%.2f\n", average);

	write_data(argv[3], account, amount, n, index, index2, average);

	free(account);
	free(amount);

	return 0;
}

int load_data(char *filename, int *account, float *amount)
{
	int i = 0;
	FILE* file = fopen(filename,"r");
	if(file == NULL)
	{
		return 0;
	}
	
	int size;
	fscanf(file, "%d", &size);

	for(i = 0; i < size; i++)
	{
		fscanf(file, "%d", (account + i));
		fscanf(file, "%f", (amount + i));
	}

	fclose(file);
	return 1;

}

void print_data(int n, int *account, float *amount)
{
	int i = 0;
	printf("Account No. Amount\n");
	for(i = 0; i < n; i++)
	{
		printf("%d     %-.2f\n", *(account + i), *(amount +i));
	}
}

int highest_amount(float *amount, int n)
{
	int i = 0, high = 0, x;

	for(i = 0; i < n; i++)
	{
		if(*(amount + i) > high)
			{
				high = *(amount + i);
				x = i;
			}
	}
	return x;
}

int lowest_amount(float *amount, int n)
{
	int i = 0, low = *amount, x;

	for(i = 0; i < n; i++)
	{
		if(*(amount + i) < low)
		{
			low = *(amount + i);
			x = i;
		}
	}
	return x;
}

float average_amount(float *amount, int n)
{	
	float average = 0;
	int i = 0;
	
	for(i = 0; i < n; i++)
	{
		average += *(amount + i);
	}
	return average / n;
}

int write_data(char *filename, int *account, float *amount, int n, int index, int index2, float average)
{
	int i = 0;
	FILE* file = fopen(filename, "w");
	if(file == NULL)
	{
		return 0;
	}
	
	fprintf(file, "Account No. Amount\n");
	for(i = 0; i < n; i++)
	{
		fprintf(file, "%d     %-.2f\n", *(account + i), *(amount + i));
	}
	fprintf(file, "The Highest amount is $%.2f in the account number %d\n", *(amount + index), *(account + index));
	fprintf(file, "The Lowest amount is $%.2f in the account number %d\n", *(amount + index2), *(account + index2));
	fprintf(file, "The average amount is $%.2f\n", average);
	fclose(file);
	return 1;
}

