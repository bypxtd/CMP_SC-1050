// Bruce Phommaly
// bypxtd
// 02/10/15
// Lab 3
// Loops

#include <stdio.h>

// Function
int error_check(int x, int  y, int z);
int main (void)

{
	int x, y, z;
    float average;

	printf("Enter the midterm1 grade: \n");
	scanf("%d", &x);
	while (x < 0 | x > 100)
		{
			printf("Invalid grade enter the grade again: \n");
			scanf("%d", &x);
		}	
	
	printf("Enter the midterm2 grade: \n");
	scanf("%d", &y);
	while (y < 0 | y > 100)
		{
			printf("Invalid grade enter the grade again: \n");
			scanf("%d", &y);
		}

	printf("Enter the final grade: \n");
	scanf("%d", &z);
	while (z < 0 | z > 100)
		{
			printf("Invalid grade enter the grade again: \n");
			scanf("%d", &z);
		}

	average = (float) (x + y + z) / 3;
	
	if (average >= 90 & average <= 100)
		{
			printf("Students total is %.2f and the overall grade in the course is A\n", average);
		}
		else if (average >= 80 & average < 90)
			{
				printf("Students total is %.2f and the overall grade in the course is B\n", average);
			}
			else if (average >= 70 & average < 80)
					{
						printf("Students total is %.2f and the overall grade in the course is C\n", average);
					}
				else if (average >= 60 & average < 70)
					{
						printf("Students total is %.2f and the overall grade in the course is D\n", average);
					}
					else if (average >= 0 & average < 60)
						{
							printf("Students total is %.2f and the overall grade in the course is F\n", average);
						}

	return 0;
}

