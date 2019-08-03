// Bruce Phommaly
// bypxtd
// Lab 5
// 03/03/2015
// Function implementation

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber (void);
void displayMenu (void);
int errorCheck (int option);
int checkGuess( int option, int answer);
void printResult (int result, int answer);

int main (void)
{
	srand(time(NULL));
	int option2, guess2, result2, answer2;
	generateNumber ();
	displayMenu ();
	errorCheck(option2);
	checkGuess(option2, answer2);
	printResult(result2, answer2);

	return 0;
}

int generateNumber (void)
{
	int answer;
	answer = (rand() % 2);
}

void displayMenu (void)
{
	printf("Please take a guess\n");
	printf("0 : Heads\n");
	printf("1 : Tails\n");
	printf("Enter your guess: \n");
}

int errorCheck (int option)
{
	scanf("%d", &option);
	while (option <0 || option > 1)
	{
		printf("Invalid guess, enter your choice again\n");
		scanf("%d", &option);
	}
}

int checkGuess (int option, int answer)
{
	if (option == answer)
	{
		return 1;
	}
		else 
		{
			return 0;
		}
}

void printResult (int result, int answer)
{
	if (result == answer)
	{
		printf("Your choice was %d and it is a correct guess!\n", result);
	}
		else
		{
			printf("Your choice was %d and it is an incorrect guess.\n", result);
		}
	
}


