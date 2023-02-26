#include "main.h"

/**
* _strcat - function appends the src string to the dest string, overwriting
* the terminating \0 byte at the end of dest
* @dest: pointer to the destination string
* @src: poniter to the source string
* Return: pointer to destination string
*/

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (*(dest + length) != '\0')
	{
		length++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + length) = *(src + i);
		length++;
	}

	*(dest + length) = *(src + i);

	return (dest);
}
