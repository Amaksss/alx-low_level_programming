#include "main.h"
/**
 * print_last_digit - Entry point
 * Return: 0 (success)
 */

int print_last_digit(int)
{
	int i;

	while (i = num % 10)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
