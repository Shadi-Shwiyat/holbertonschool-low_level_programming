#include "main.h"

/**
 * *_strcat - function concatenates two different
 * strings
 * @dest: the string that has the source added to the end
 * @src: the string that is added to the end of dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[srclen] != '\0')
	{
		dest[destlen + srclen] = src[srclen];
		srclen++;
	}
	dest[destlen + srclen] = '\0';
	return (dest);
}
