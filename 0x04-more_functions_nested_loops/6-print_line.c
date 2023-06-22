#include "main.h"
#include <stdio.h>
/**
 * print_line - Entry point
 * @n: parameter
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
