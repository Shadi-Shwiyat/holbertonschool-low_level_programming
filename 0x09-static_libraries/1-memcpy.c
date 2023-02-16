#include "main.h"

/**
 *  * *_memcpy - function copies memory area
 *   *
 *    * @dest: a pointer to the memory area (buffer)
 *     * @src: the source to copy
 *      * @n: number of things to copy
 *       *
 *        * Return: a pointer to the memory area dest
 *         */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i = 0;

			for (; i < n; i++)
					{
								dest[i] = src[i];
									}
				return (dest);
}

