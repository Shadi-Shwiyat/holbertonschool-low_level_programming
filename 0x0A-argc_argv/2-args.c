#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints all args that are passed into it
 * @argc: the number of command line arguements
 * @argv: an array of strings of argc
 *
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
