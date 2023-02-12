#include "main.h"

/**
 * *leet - function encodes a string into 1337
 *
 * @s: string to encode
 *
 * Return: char s
 */

char *leet(char *s)
{
	int i = 0;
	int x;
	int maxChar = 10;
	char letter[] = {
		'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {
		52, 52, 51, 51, 48, 48, 55, 55, 49, 49};


	while (s[i] != '\0')
	{
		x = 0;

		while (x < maxChar)
		{
			if (s[i] == letter[x])
			{
				s[i] = numbers[x];
			}
			x++;
		}
		i++;
	}
	return (s);
}
