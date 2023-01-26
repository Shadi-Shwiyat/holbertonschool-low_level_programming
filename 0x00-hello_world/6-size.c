#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %d bytes(s)\n", sizeof(charType));
	printf("Size of an int: %d bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %d bytes(s)\n", sizeof(longintType));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(longlongintType));
	printf("Size of a float: %d bytes(s)\n", sizeof(floatType));
}
