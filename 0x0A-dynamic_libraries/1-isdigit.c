#include "main.h"

/**
* _isdigit - checks for a digit 0-9
* @c: checks to see if it is a digit
*
* Return: 1 if a digit otherwise 0
*
*/

int _isdigit(int c)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == (i + '0'))
			return (1);
	}
	return (0);

}
