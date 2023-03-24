#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string between numbers
 * @n: number of strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator != NULL)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap, char*) == NULL)
				printf("nill");
			elif (va_arg(ap, char*) != NULL)
				printf("%s", va_arg(ap, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
		va_end(ap);
		printf("\n");
	}
}
