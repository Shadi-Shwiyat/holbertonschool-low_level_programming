#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything passed to the
 * it as an argurment
 *
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *s, *sep = "";
	int i = 0;
	char c;

	va_start(ap, format);

	while (format && format[i])
	{
		c = format[i];

		switch (c)
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
		}

		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(ap);
}
