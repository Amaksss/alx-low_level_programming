#include "main.h"
/**
 * main - Entry point
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i + 'a');
	}
	_putchar('\n');
}
