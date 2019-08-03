// Bruce Phommaly
// bypxtd
// Homework 2
// 03/19/15
// Arrays and functions

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check_error(int);
void initialize_array(int[], int);
void print_array(int[], int);
int count_numbers(int[], int, int);
int search(int[], int, int);
void frequency(int[], int[], int);
int mode(int[]);
void print_histogram(int[]);

int main (void)
{
	int x, numbers[100]={0}, y, num[10]={0};
	printf("Enter the size of the input: ");
	scanf("%d", &x);
	check_error(x);

	while (check_error(x) == 0)
	{
		printf("Invalid input enter the size of the input again: ");
		scanf("%d", &x);
	}	

	initialize_array(numbers, x);

	printf("\nInput array\n");
	print_array(numbers, x);
	printf("\n");

	printf("\nEnter the number you want to search: ");
	scanf("%d", &y);

	if (search(numbers, x, y) != -1)
	{
		printf("\nThe number %d is present at the index %d\n", y, search(numbers, x, y));
	}
	else
	{
		printf("\nThe number %d is not present in the array\n", y);
	}

	frequency(numbers, num, x);

	printf("\nMode for the array is number %d\n", mode(num));

	printf("\nPrinting histogram\n");
	print_histogram(num);

	return 0;
}

int check_error (int x2)
{
	if (x2 > 0 && x2 < 100)
		return 1;
	else
		return 0;
}

void initialize_array (int numbers[], int x2)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < x2; i++)
	{
		numbers[i] = rand() % 10;
	}
}

void print_array (int numbers[], int x2)
{
	int i;
	for (i = 0; i < x2; i++)
	{	
		printf("%4d", numbers[i]);
	}
}


int count_numbers (int numbers[], int x2, int y2)
{
	int i, counter = 0;
	for (i = 0; i < x2; i++)
	{	
		if (numbers[i] == y2)
		{
			++counter;
		}
	
	}
	return counter;
}

int search (int numbers[], int x2, int y2)
{
	int i, index = -1;
	for (i = 0; i < x2; i++)
	{
		if (numbers[i] == y2)
		{
			index = i;
		}
	}
	return index;
}

void frequency(int numbers[], int numbers2[], int x2)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		numbers2[i]=count_numbers(numbers, x2, i);
	}
}

int mode (int counter[])
{
	int i, largest = 0, most = 0;
	for (i = 0; i < 10; i++)
	{
		if (counter[i] >= largest)
		{
			largest = counter[i];
			most = i;
		}
	}
	return most;
}

void print_histogram(int counter[])
{
	int i, count;
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d:", i);
		for (count = counter[i]; count > 0; count--)
		{
			printf("*");
		}
	printf("\n");	
	}
}
