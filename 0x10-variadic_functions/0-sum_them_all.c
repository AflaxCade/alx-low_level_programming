#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its parameters.
 *
 * @n: The number of parameters that follow.
 *
 * Return: If n == 0, return 0. Otherwise, return the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{

	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
