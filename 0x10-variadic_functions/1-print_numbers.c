#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;

	if (separator == NULL)
		return;

	va_start(valist, n);
	for (i = 0; i < n; i++)
{
	printf("%d", va_arg(valist, const unsigned int));

	if (i < (n - 1))
	printf("%s", separator);
}
	
va_end(valist);

printf("\n");
}
