// Bruce PhommalyX]
// bypxtd
// Homework 3
// 04/08/15
// 2 Dimensional Array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void display_menu();
int check_option(int);
int check_size(int);
void initialize_2Darray(int [][MAX], int);
void print_2Darray(int [][MAX], int);
void initialize_1Darray(int [], int);
void print_1Darray(int [], int);
int search_min(int [][MAX], int, int, int);
int count_match(int [][MAX], int [], int, int);
int closest_row(int [][MAX], int [], int);
void sort_1Darray(int [], int);
void sort_2Darray(int [][MAX], int);

int main (void)
{
	srand(time(NULL));
	int option, array2[MAX][MAX], array[MAX], size, row, column;

	printf("Enter the size: ");
	scanf("%d", &size);

	check_size(size);
	while(check_size(size) == 0)
	{
		printf("Invalid input enter the size of the array again: ");
		scanf("%d", &size);
	}

	while(option !=6)
	{
		display_menu();
		scanf("%d", &option);

		check_option(option);
		while(check_option(option) == 0)
		{
			printf("Invalid input enter the operation you want to perform again: ");
			scanf("%d", &option);
                        		}

		initialize_2Darray(array2, size);
		initialize_1Darray(array, size);
	
		switch(option)
		{
			case 1: {
						printf("\n2D arrays\n");
						print_2Darray(array2, size);
						printf("\nEnter the row: ");
						scanf("%d", &row);
						while(row < 1 || row > size)
						{
							printf("Invalid row input another row between 1 and %d: ", size);
							scanf("%d", &row);
						}
							printf("Enter the column: ");
							scanf("%d", &column);
							while(column < 1 || column > size)
							{
								printf("Invalid column input another column between 1 and %d: ", size);
								scanf("%d", column);
							}
							int rowf = row - 1, columnf = column-1;
							printf("\nThe smallest number present in the row %d and column %d is %d\n", row, column, search_min(array2, rowf, columnf, size));
							break;
					}

			case 2: {
				  		printf("\nCount Match Operation\n");
						printf("\n2D arrays\n");
						print_2Darray(array2, size);
						printf("\n1D array\n");	
						print_1Darray(array, size);	
                        printf("\nEnter the row: ");
						scanf("%d", &row);		
						while(row < 1 || row > size)
						{
							printf("Invalid row input another row between 1 and %d: ", size);
							scanf("%d", &row);
						}				
						int rowf = row - 1;
                        if(count_match(array2, array, size, row) > 0)
						{
							printf("\nThere are %d matches from 1D array present in the row %d of the 2D array\n", count_match(array2, array, size, row-1), row);			
						}
							else
							{
								printf("\nThere are no numbers from 1D array present in the 2D array\n");
							}
						break;
					}

			case 3: {
						printf("\nClosest Row Operation\n");
						printf("\n2D arrays\n");
						print_2Darray(array2, size);
						printf("\n1D array\n");
						print_1Darray(array, size);
						printf("\nRow closest to the 1D array is row %d\n", closest_row(array2, array, size) + 1);
						break;
					}
	
			case 4: {
						printf("\nSort 1D Array Operation\n");
						printf("\n1D Array before sorting\n");
						print_1Darray(array, size);
						sort_1Darray(array, size);
						printf("\n1D Array after sorting\n");
						print_1Darray(array, size);
						break;
					}

			case 5: {
						printf("\nSort 2D Array Operation\n");
						printf("\n2D Array before sorting\n");
						print_2Darray(array2, size);
						sort_2Darray(array2, size);
						printf("\n2D Array after sorting\n");
						print_2Darray(array2, size);
						break;
					}

			case 6: {	
						break;
					}
			}
		}
	return 0;
}

void display_menu()
{
	printf("\nArray operations, your options are: \n");
	printf("\n1: Searh Min");
	printf("\n2: Count Matches");
	printf("\n3: Closest Row");
	printf("\n4: Sort 1D Array");
	printf("\n5: Sort 2D Array");
	printf("\n6: Exit");
	printf("\nEnter the operation you want to perfom: ");
}

int check_option(int option)
{
	if(option >= 1 && option <= 6)
		return 1;
	else 
		return 0;
}

int check_size(int size)
{
	if(size > 0 && size <= 100)
		return 1;
	else 
		return 0;
}

void initialize_2Darray(int array2[][MAX], int size)
{
	int i, j;
	for(i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			array2[i][j] = rand() % 10;
		}
	}
}

void print_2Darray(int array2[][MAX], int size)
{
	int i, j;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("%3d", array2[i][j]);
		}
		printf("\n");
	}
}

void initialize_1Darray(int array[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}
}

void print_1Darray(int array[], int size)
{
	int i;
	for(i =0; i < size; i ++)
	{
		printf("%3d", array[i]);
	}
	printf("\n");
}

int search_min(int array2[][MAX], int r, int c, int size)
{
	int i, j, min = 0;
	for(i = 0; i < size; i++)
	{
		if(array2[r][i] < min);
		{			
			min = array2[r][i];
		}		
	}
	for(j = 0; j < size; j++)
	{
		if(array2[j][c] < min)
		{
			min = array2[j][c];
		}
	}	
	return min;
}

int count_match(int array2[][MAX], int array[], int size, int r)
{
	int i, j, count = 0;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if(array[i] == array2[r][j])
			{
				count++;
			}
		}
	}
		return count;
}

int closest_row(int array2[][MAX], int array[], int size)
{
	int i, j, sum, difference = 900, row = 0; 
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			sum = sum + abs(array2[i][j] - array[j]);
		}
		if(sum < difference)
		{
			difference = sum;
			row = i;
		}
		sum = 0;
	}
	return row;
}

void sort_1Darray(int array[], int size)
{
	int i, j, x;
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(array[i] > array[j])
			{
				x = array[j];
				array[j] = array[i];
				array[i] = x;
			}
		}
	}
}

void sort_2Darray(int array2[][MAX], int size)
{
	int i, j, x, y;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++) 
		{
			for(x = j + 1; x < size; x++)
			{
				if(array2[i][x] < array2[i][j])
				{
					y = array2[i][j];
					array2[i][j] = array2[i][x];
					array2[i][x] = y;	
				}
			}
		}
	}
}
