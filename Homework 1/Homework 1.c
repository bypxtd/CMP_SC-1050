// Bruce Phommaly
// bypxtd
// Homework 1
// 02/15/15
// Use scanf/printf, data types, and conditional statements/loops

#include <stdio.h>

int main (void)
{
	int c, x, y, z, *highcompare, *lowcompare;
	char grade;
	float average;

// loop
	c = 1;
	while (c == 1)
	{

// input
	printf("Enter the midterm1 grade: ");
	scanf("%d", &x);
	while (x < 0 | x > 100 )
	{
		printf("Invalid grade enter the grade again: ");
		scanf("%d", &x);
	}

	printf("Enter the midterm2 grade: ");
	scanf("%d", &y);
	while (y < 0 | y > 100)
	{
		printf("Invalid grade enter the grade again: ");
		scanf("%d", &y);
	}

	printf("Enter the final grade: ");
	scanf("%d", &z);
	while (z < 0 | z > 100)
	{
		printf("Invalid grade enter the grade again: ");
		scanf("%d", &z);
	}

// highest exam
	if (x > y && x > z)
	{
		highcompare = &x;
		printf("Highest grade for the student is %d in midterm 1\n", *highcompare);
	}
		else if (y > x && y > z)
		{
			highcompare = &y;
			printf("Highest grade for the student is %d in midterm 2\n", *highcompare);
		}
			else
			{
				highcompare = &z;
				printf("Highest grade for the student is %d in the final\n", *highcompare);
			}
		
// lowest exam
	if (x < y && x < z)
	{
		lowcompare = &x;
		printf("Loweset grade for the student is %d in midterm 1\n", *lowcompare);
	}
		else if (y < x && y < z)
		{
			lowcompare = &y;
			printf("Lowest grade for the student is %d in the midterm 2\n", *lowcompare);
		}
			else
			{
				lowcompare = &z;
				printf("Lowest grade for the student is %d in the final\n", *lowcompare);
			}
	
// equation
	average = (float) (x + y + z) / 3;

// letter grades
	if (average >= 90)
	{
		grade = 'A';
	}
		else if (average >= 80 && average <= 89)
		{
			grade = 'B';
		}
			else if (average >= 70 && average <= 79)
			{
				grade = 'C';
			}
				else if (average >= 60 && average <= 69)
				{
					grade = 'D';
				}
					else
					{
						grade = 'F';
					}

// output
	printf("Students total is %.2f and overall grade in the course is %c\n", average, grade);

	printf("Do you want to continue (enter 1 to continue and 0 to exit): ");
	scanf("%d", &c);

// break
	if (c == 0)
		break;
	}
	return 0;
}
