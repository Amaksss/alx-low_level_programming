#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: parameter
 * Return: value of last digit of number
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
