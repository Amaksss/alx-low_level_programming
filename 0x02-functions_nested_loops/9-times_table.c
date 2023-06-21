#include "main.h"
/**
 * times_table - Entry point
 * Return: void
 */

void times_table(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		_putchar(i*i);
	}
	_putchar('\n');
}

