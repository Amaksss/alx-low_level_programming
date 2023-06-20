#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (i == 10)
		{
			_putchar(i + 1);
		}
	}
	_putchar('\n');
}
