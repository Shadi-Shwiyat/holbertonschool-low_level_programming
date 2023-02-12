#include "main.h"

/**
 * *cap_string - function capitalizes all
 *	words of a string
 *
 * @s: the string to capitalize all the 
 *	first letter of words in
 *
 *
 * Return: char s
 */

char *cap_string(char *s)
{
	int i = 0;
	int x;
	int maxChar = 13;
	char delim[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		x = 0;

		while (x < maxChar)
		{
			if ((i == 0 || s[i-1] == delim[x]) && (s[i] >= 97 && s[i] <= 122))
			{
				s[i] -= 32;
			}
			x++;
		}
		i++;
	}

	return (s);
}
