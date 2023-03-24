#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum, 0 if errors
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	if (n > 0)
	{
		va_list ap;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
	return (0);
}
