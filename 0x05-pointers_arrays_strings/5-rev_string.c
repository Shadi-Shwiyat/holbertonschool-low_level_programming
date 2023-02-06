#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 *
 * Return: void
 *    
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int x;

	while (s[counter] != '\0')
	fcounter++;

	for (x = 0; x < fcounter; x++)
	{
		counter--;
		rev = s[x];
		s[x] = s[counter];
		s[counter] = rev;
	}
}
