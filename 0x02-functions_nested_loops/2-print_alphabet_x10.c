#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i + 'a');
		}
	}
	_putchar('\n');
}
