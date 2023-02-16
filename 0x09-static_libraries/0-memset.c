#include "main.h"

/**
 *  * *_memset - function fills memory with a constant byte
 *   *
 *    * @s: a pointer to the memory area (buffer)
 *     * @b: the byte to fill in memory
 *      * @n: number of bytes to fill
 *       *
 *        * Return: a pointer to the memory area s
 *         */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i = 0;

			for (; i < n; i++)
					{
								s[i] = b;
									}
				return (s);
}
