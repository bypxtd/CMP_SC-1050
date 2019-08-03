#include <stdio.h>
#include <stdlib.h>

int length(char *);
char* copy(char *);
char* reverse(char *);
void clear(char *);

int main (int argc, char **argv)
{
	char *str;
	str = malloc(sizeof(char) * 10);

	if(argc < 2)
	{
		printf("Not enough parameters\n");
		return 0;
	}

	char *s = *(argv + 1);
	printf("Input String is %s\n", s);
	int i = 0;
	
	int s = length(s);
	printf("Length of the string is %d\n", s);
	
	char t = copy(s);
	printf("Copy of the string is %d\n", t);
	return 0;
}

int length(char *s)
{
	int count = 0;

	while(*(s + count))
		count++;

	return count;
}

char* copy(char *s)
{
	int i = 0;	
	char *string_length = malloc(sizeof(length(s));
	char *new_string = string_length;

	for(i = 0; i < string_length; i++)
	{
		*(newstring + i) = *(length(s) + i);
	}

	return new_string;
}
