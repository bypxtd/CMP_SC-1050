// Bruce Phommaly
// bypxtd
// Lab 8
// 03/31/15
// 2D array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int check_error(int);
void initialize_2Darray(int [][MAX], int);
void print_2Darray(int [][MAX], int);
int check_index(int, int);
int find_columnmax(int [][MAX], int, int);
float calculate_columnaverage(int [][MAX], int, int);
int find_rowmin(int [][MAX], int, int);

int main (void)
{
	srand(time(NULL));

	int size, array[MAX][MAX], index, c, max, i, r, min;
	float average;

	printf("Enter the size of the 2D array: ");
	scanf("%d", &size);

	check_error(size);
	while (check_error(size) == 0)
	{
		printf("Invalid input enter the size of the array again: ");
		scanf("%d", &size);
	}

	printf("\n2D arrays\n");
	initialize_2Darray(array, size);
	print_2Darray(array, size);

	printf("\nEnter the column(1-%d): ", size);
	scanf("%d", &index);

	check_index(index, size);
	while (check_index(index, size) == 0)
	{
		printf("Invalid column index enter the column again: ");
		scanf("%d", &index);
	}

	max = find_columnmax(array, index - 1, size);
	printf("The largest number present in column %d is %d\n", index, max);

	average = calculate_columnaverage(array, index - 1, size);
	printf("The average of numberse present in the column %d is %.2f\n\n", index, average);

	for (i = 0; i < size; i++)
	{
		min = find_rowmin(array, i, size);
		printf("Minimum number present in row %d is %d\n", i + 1, min);
	}

	return 0;
}

int check_error (int size)
{
	if (size > 0 && size < 100)
		return 1;
	else
		return 0;
}

void initialize_2Darray(int array[][MAX], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			array[i][j] = rand()% 100;
		}
	}

}

void print_2Darray(int array[][MAX], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
}

int check_index(int index, int size)
{
	if(index > 0 && index <= size)
		return 1;
	else
		return 0;
}

int find_columnmax(int array[][MAX], int c, int size)
{
	int i, max = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i][c] > max)
		{
			max = array[i][c];
		}
	}
	return max;
}


int find_rowmin(int array[][MAX], int r, int size)
{
	int i, min = 100;

	for (i = 0; i < size; i++)
	{
		if (array[r][i] < min)
		{
			min = array[r][i];
		}
	}
	return min;
}

float calculate_columnaverage(int array[][MAX], int c, int size)
{
	int i, sum = 0;
	float average = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + array[i][c];
	}
	average = (float) sum / size;

	return average;
}
