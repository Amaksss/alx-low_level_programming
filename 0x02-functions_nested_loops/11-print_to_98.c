#include "main.h"
/**
 * print_to_98 - Entry point
 * Return: void
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
	}
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
