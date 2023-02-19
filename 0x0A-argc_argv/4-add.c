#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program adds positive numbers
 * @argc: the number of command line arguements
 * @argv: an array of strings of argc
 *
 *
 * Return: 0 if no number is passed to the program,
 * the result if success,
 * and 1 if the arguments contain symbols that
 * are not number and prints error
 */

int main(int argc, char *argv[])
{
	unsigned long int j;
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
		return (0);
	}

	else
	{
		printf("0\n");
		return (0);
	}
}
