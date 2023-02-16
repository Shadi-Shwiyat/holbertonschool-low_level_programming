#include "main.h"
/**
 *  * _isalpha - Checks if a character is alphabetic.
 *   * @c: The character to be checked.
 *    *
 *     * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 *      */
int _isalpha(int c)
{
		char i;

			for (i = 'a'; i <= 'z'; i++)
					{
								if (c == i)
												return (1);
									}
				for (i = 'A'; i <= 'Z'; i++)
						{
									if (c == i)
													return (1);
										}
					return (0);
}
