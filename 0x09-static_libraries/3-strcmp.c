#include "main.h"

/**
 * * _strcmp - compares two strings
 * * @s1: points to characters in string 1
 * * @s2: points to characters in string 2
 * *
 * * Return: vluse less that 0 if string is less that other
 * * value greater 0 in other string
 * * 0 if strings are the same
 * */

int _strcmp(char *s1, char *s2)

{
		int i;

			for (i = 0; s1[i] != '\0'; i++)
						if (s1[i] != s2[i])
										return (s1[i] - s2[i]);
				return (0);
}
