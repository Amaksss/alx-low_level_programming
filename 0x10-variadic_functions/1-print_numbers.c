#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - funtion that prints numbers
 * @separator: parameter
 * @n: parameter
 * @...: parameter
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_args(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	print("\n");

	va_end(args);
}
