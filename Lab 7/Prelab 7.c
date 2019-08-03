#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check_error(int);
void initialize_array(int[], int);
void print_array(int[], int);
int replace(int[], int, int, int);

int main (void)
{
	int x, size[x];
	printf("Enter the size of the input: ");
	scanf("%d", &x );
	check_error(x);

	while(check_error(x) == 0)
	{
		printf("Invalid input enter the size of the input again: ");
		scanf("%d", &x);
	}

	initialize_array(size, x);

	print_array(size, x);
	printf("\n");

	return 0;
}

int check_error (int x2)
{
	if (x2 > 0 && x2 < 100)
		return 1;
	else
		return 0;
}

void initialize_array (int size[], int x2)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < x2; i++)
	{
		size[i] = rand() % 10;
	}
}

void print_array (int size[], int x2)
{
	int i;
	for (i = 0; i < x2; i++);
	{
		printf("%4d", size[i]);
	}
}
