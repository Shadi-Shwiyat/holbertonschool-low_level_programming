#include "main.h"

/**
* _strncat - function is similar to _strcat except that it will use at most
* n bytes from src; and src does not need to be null-termiated if it contains n
* or more bytes
* @src: source of the string
* @dest: source of the string
* @n: number of bytes to be linked
*
* Return: pointer to resulting string dest
*/

char *_strncat(char *dest, char *src, int n)

{

	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[length] = src[j];
		j++;
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
