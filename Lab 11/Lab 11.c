// Bruce Phommaly
// bypxtd
// Lab 11
// 04/28/15
// Pointer arithmetic and malloc

#include <stdio.h>
#include <stdlib.h>

int length(char *);
char* copy(char *);
char* reverse(char *);
void clear(char *);
char* merge(char *, char *);
int prefix(char *, char *);

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		printf("Not enough parameters\n");
		return 0;
	}
	
	char *s = *(argv + 1);
	printf("First string is %s\n", s);

	int string_length = length(s);
	printf("Length of the string is %d\n", string_length);

	char *new_string = copy(s);
	printf("Copy of the first string is %s\n", new_string);

	char *reverse_string = reverse(s);
	printf("Reverse of the string is %s\n", reverse_string);

	char **string1;
	printf("Enter a string for the merge operation: ");
	scanf("%s\n", &string1);
	char *s1 = *(string1);
	char *merge_string = merge(s, s1);
	printf("Merged string is %s\n", merge_string);

	char **string2, **string3;
	printf("Enter a string for the prefix operation: ");
	scanf("%s\n", &string2);
	printf("Enter a string to check for prefix: ");
	scanf("%s\n", &string3);
	
	char *s2 = *(string2);
	if(prefix(s, s2) == 1)
	{
		printf("%s is a prefix of %s\n", string3, string2);
	}
	else
	{
		printf("%s is not a prefix of %s\n", string3, string2);
	}

	clear(s);
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
	s = malloc(sizeof(char) * length(s));
	char *new_string;
	int i;
	for(i = 0; i < *(s); i++)
	{
		*(new_string + i) = *(s + i);
	}

	*(new_string + (i + 1)) = '\0';
}

char* reverse(char *s)
{
	s = malloc(sizeof(char) * length(s));
	char * new_string;
	int i;
	for(i = 0; i < *(s); i++)
	{
		*(new_string + (i + 1)) = *(s + i - 1);
	}

	*(new_string + (i + 1)) = '\0';
}

void clear (char *s)
{
	free(s);
}

char* merge(char *s, char *s1)
{
	
}

int prefix(char *s, char *s2)
{
	s = malloc(sizeof(char) * length(s));
	int i;
	for(i = 0; i < *(s); i++)
	{
	}
}
