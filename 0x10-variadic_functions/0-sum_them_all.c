#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: parameter
 * @...: parameter
 *
 * Return: 0 if n == 0 otherwise return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);

	va_end(args);
	return (sum);
}
