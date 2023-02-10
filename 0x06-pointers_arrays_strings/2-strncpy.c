#include "main.h"

/**
 * *_strcpy - function copies two strings together
 *
 * @dest: the string that has the source added to the end
 * @src: the string that is added to the end of dest
 * @n: the number of characters to stop on src
 *
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;

	
	for (; srclen < n && src[srclen] != '\0'; srclen++)
	{
		dest[destlen] = src[srclen];
		destlen++;
	}
	for (; srclen < n; srclen++)
	{
		dest[destlen] = '\0';
	}
	return (dest);
}
