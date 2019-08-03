#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void initialize_array(int *, int);
void print_array(int *, int);
int check_size(int);
int count_even(int *, int);

int main (void)
{
	int size, array[MAX], *arraypointer;
	arraypointer = array;

	printf("Enter the size of the input: ");
	scanf("%d", &size);

	check_size(size);
	while(check_size(size) == 0)
	{
		printf("Invalid input enter the size of the array again: ");
		scanf("%d", &size);
	}

	initialize_array(arraypointer, size);

	printf("\nInput Array\n");
	print_array(arraypointer, size);

	count_even(arraypointer, size);
	if(count_even(arraypointer, size) == 0)
	{
		printf("\nThere are no even numbers present in the array\n");
	}
	else
	{
		printf("\nThere are %d even numbers present in the array\n", count_even(arraypointer, size));
	}

	return 0;
}

void initialize_array(int *arraypointer, int size)
{
	srand(time(NULL));
	int i;
	for(i = 0; i < size; i++)
	{
		*(arraypointer + i) = rand () % 10;
	}
}

void print_array(int *arraypointer, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%2d", *(arraypointer + i));
	}
	printf("\n");
}

int check_size(int size)
{
	if(size > 0 && size <= 100)
		return 1;
	else
		return 0;
}

int count_even(int *arraypointer, int size)
{
	int evencount = 0, i;
	for(i = 0; i < size; i++)
	{
		if((*(arraypointer + i) % 2) == 0)
		{
			evencount++;
		}
	}
	return evencount;
}
