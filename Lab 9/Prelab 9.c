#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int length(char []);
void copy(char [], char[]);

int main (int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("/n Not enough parameters\n");
		return 0;
	}
	
	int len=length(argv[1]);
	char y[MAX];

	printf("\n Input string is %s", argv[1]);
	printf("\n Length of the string is %d", len);
	printf("\n Copy of the string is %s", y);
	return 0;
}

int length(char[])
{
	int x;
	("%s", x);
	return x;
}
