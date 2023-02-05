#include <stdlib.h>
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
		if ((num1 % 15) == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if ((num1 % 3) == 0)
		{
			printf("%s ", "Fizz");
		}
		else if ((num1 % 5) == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", num1);
		}
	}
	putchar('\n');
	return (0);
}
