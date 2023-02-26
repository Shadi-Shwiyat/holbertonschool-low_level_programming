#include "main.h"

/**
* _strncpy - function is similar to _strcat except that it will use at most
* n bytes from src; and src does not need to be null-termiated if it contains n
* or more bytes
* @dest: pointer to destination string
* @src: pointer to source string
* @n: number of bytes to be used
* Return: destination pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
