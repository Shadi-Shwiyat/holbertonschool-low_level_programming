#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints how many args are passed into it
 * @argc: the number of command line arguements
 * @argv: an array of strings of argc
 *
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
