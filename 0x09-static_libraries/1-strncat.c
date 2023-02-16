#include "main.h"

/**
 *  * *_strncat - function concatenates two different
 *   * strings but stops copying the src at the value of n
 *    * @dest: the string that has the source added to the end
 *     * @src: the string that is added to the end of dest
 *      * @n: the number of characters to stop on src
 *       *
 *        *
 *         * Return: a pointer to the resulting string dest
 *          */

char *_strncat(char *dest, char *src, int n)
{
		int destlen = 0;
			int srclen = 0;

				while (dest[destlen] != '\0')
						{
									destlen++;
										}

					while (srclen < n && src[srclen] != '\0')
							{
										dest[destlen + srclen] = src[srclen];
												srclen++;
													}
						dest[destlen + srclen] = '\0';
							return (dest);
}
