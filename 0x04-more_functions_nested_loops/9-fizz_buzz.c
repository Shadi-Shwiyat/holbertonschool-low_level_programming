#include "main.h"
#include <stdio.h>

/**
 * main - function prints numbers
 * 1 to 100 and replaces multiples of 3
 * with Fizz, multiples of 5 prints Buzz,
 * and multiples of 15 prints FizzBuzz.
 *
 * Return: Always 0
 */

int main(void)
{
	int num1;

	for (num1 = 1; num1 <= 100; num1++)
	{
		if ((num1 % 3) == 0 && (num1 % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num1 % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num1 % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num1);
		}
		if (num1 != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
