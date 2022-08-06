#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all it parameters.
 * @n: number of arguments to be summed.
 * 
 * Return: sum or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned in sum = 0, i;
	va_list arglist;

	if (n == 0)
		return (0);

	va_stat(arg;ist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg;ist, int);
	}
	va_end(arglist);

	return (sum);
}
