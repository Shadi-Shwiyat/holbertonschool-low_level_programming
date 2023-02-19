#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: the number of command line arguements
 * @argv: an array of strings of argc
 *
 *
 * Return: 0 and the result of multiplication if success,
 * otherwise return 1 and print error
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc == 3)
	{
		for (i = 1; i <= 2; i++)
		{
			product *= atoi(argv[i]);
		}

		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
