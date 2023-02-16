#include "main.h"

/**
 *  * _isupper - checks for upper case character
 *   * and returns a 1 if it exist and 0 if not
 *    *
 *     * @c: the character that is checked
 *      *
 *       * Return: 1 if uppercase otherwise 0
 *        */

int _isupper(int c)
{
		if (c >= 65 && c <= 90)
				{
							return (1);
								}
			else
					{
								return (0);
									}
}
