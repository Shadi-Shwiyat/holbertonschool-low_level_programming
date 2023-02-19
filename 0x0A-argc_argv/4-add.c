#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i][0]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
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
