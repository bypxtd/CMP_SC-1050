// Bruce Phommaly
// bypxtd
// Lab 9
// 04/07/15
// Command line parameters, character array, and strings

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int length(char []);
int replace(char [], int);
void copy(char [], char []);
void merge(char [], char []);
void reverse(char [], char []);

int main(int argc, char *argv[])
{
	char array[MAX];
	int y, index;
	
	if (argc <=1)
	{
		printf("\n Not enough parameters\n");
		return 0;
	}

	printf("\n First string is %s", argv[1]);
	printf("\n Length of the string is %d", length(argv[1]));
	printf("\n Copy of the first string is %s\n", y);

	printf("\n Enter a position for the replacement operation(1-%d): ", length(argv[1]));

	replace(argv[1], index);
	while(replace(argv[1], index) == 0)
	{
		printf("\n Inavlid position\n");
	}
	while(replace(argv[1], index) == 1)
	{
		printf("\n String after replacement operation is %s\n", argv[1]);
	}
		

	
	return 0;

}

int length(char inputString[])
{
	int i = 0, count = 0;
	while(i)
	{
		count++;
		i++;
		if(inputString[i]='\0')
		{
			return count;
		}
	}
}

int replace(char inputString[], int index)
{
	int length=20;

	scanf("%d\n", &index);

	if (index < 1 && index >= length)
		return 0;
	else
		return 1;
}

/*void copy(char inputString[], char copyOfInputString[])
{
}*/
