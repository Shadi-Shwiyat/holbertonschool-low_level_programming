#include <stdio.h>

/**
 * main - function prints alphabet in lowercase
 * and removes letters q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'e')
		{
		}

		else if (alphabet == 'q')
		{
		}

		else
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
