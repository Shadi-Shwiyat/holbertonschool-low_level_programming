#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mynameis - program prints its own name
 * @argc: the number of command line arguements
 * @argv: an array of strings of argc
 *
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
