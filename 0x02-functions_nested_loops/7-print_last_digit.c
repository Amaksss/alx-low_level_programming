#include "main.h"
/**
 * print_last_digit - Entry point
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
	int a;

	if (n < 10)
		n = -n
			a = n % 10;
	if (a < 10)
		a = -a;
	_putchar(a + '0');
	return (a);
}
