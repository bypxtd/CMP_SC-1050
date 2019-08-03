// Bruce Phommaly
// bypxtd
// Lab 10
// 04/21/15
// Pointer implemmentation

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void initialize_array(int *, int);
void print_array(int *, int);
int check_size(int);
int count_even(int *, int);
float median(int *, int);
int count_duplicate(int *, int);

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

	count_duplicate(arraypointer, size);
	printf("\nThere are %d duplicate numbers present in the array\n", count_duplicate(arraypointer, size));


	median(arraypointer, size);
	printf("\nMedian value is %0.2f\n", median(arraypointer, size));

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

float median(int *arraypointer, int size)
{
	float x, median;
	int i, j;
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(*(arraypointer + i) > *(arraypointer + j))
			{
				x = *(arraypointer + j);
				*(arraypointer + j) = *(arraypointer + i);
				*(arraypointer + i) = x;
			}
		}	
	}

	if(size % 2 == 0)
		{
			median = (*((arraypointer + (size / 2)) + (*(arraypointer + ((size / 2)) - 1))) / 2);
		}
	else
		{
			median = (*(arraypointer + (size / 2)));	
		}

	return median;
}

// Can't figure out count_duplicate
int count_duplicate(int *arraypointer, int size)
{
	int count[10] = {0}, *countpointer, i, j, duplicatecount = 0;
	countpointer = count;
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(j == *(arraypointer + i))
			{
				*(countpointer + j) = (*(countpointer + j) + i);
			}
		
		}
	}

	for(i = 0; i < 10; i++)
	{
		if((*(countpointer + i) % 2) == 0)
		{
			duplicatecount = ((*(countpointer + i) / 2)) + duplicatecount;
		}
		else
		{
			duplicatecount = (((*(countpointer + i) - 1) / 2)) + duplicatecount;
		}
	}
	
		return duplicatecount;
}
