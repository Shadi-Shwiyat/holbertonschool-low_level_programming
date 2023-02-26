#include "main.h"
/**
* _isupper - checks to see if c is uppercase
* @c: character checked
*
* Return: 1 if uppercase and 0 if otherwise
*/
int _isupper(int c)

{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
