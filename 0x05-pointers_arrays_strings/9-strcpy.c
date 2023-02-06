#include "main.h"

/**
 * _strcpy - function copies the string pinted to by src,
 * including the terminating null byte, to the buffer pointed
 * to by dest
 *
 *@dest: pointer to the buffer
 *@src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
