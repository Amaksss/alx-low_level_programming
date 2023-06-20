#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 98; i++)
	{
		_putchar(i);
	}
	if (i != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
