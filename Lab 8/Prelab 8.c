#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int check_error(int);
void initialize_2Darray(int [][MAX], int);
int smallest_number(int [][MAX], int);
void print_2Darray(int [][MAX], int);


int main (void)
{
	int size, twod[MAX][MAX];
	srand(time(NULL));

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	check_error(size);
	while (check_error(size) == 0)
	{
		printf("Invalid input enter the size of the array: ");
		scanf("%d", &size);
	}

	initialize_2Darray(twod, size);
	print_2Darray(twod, size);

	return 0;
}

int check_error (int size)
{
	if (size > 0 && size < 100)
		return 1;
	else
		return 0;
}

void initialize_2Darray (int array[][MAX], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			array[i][j] = rand ()% 10;
		}
	}
}

void print_2Darray(int array[][MAX], int size)
{
	int i, j;
	printf("\nInput array\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{	
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
}

int smallest_number(int array[][MAX], int size)
{

}
