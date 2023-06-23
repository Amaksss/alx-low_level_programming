#include "main.h"

/**
 * print_number - Entry point
 * @n: parameter
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
