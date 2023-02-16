#include "main.h"
/**
 *  * _strlen - returns length of given string
 *   * @s: given string to get length
 *    *
 *     *
 *      * Return: Length of s
 *       *
 *        */

int _strlen(char *s)
{
		int i = 0;

			while (*s != '\0')
					{
								s++;
										i++;
											}
				return (i);
}
