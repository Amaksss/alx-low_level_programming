#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			_putchar(j + 'a');
		}
		_putchar('\n');
	}
	return (0);
}
