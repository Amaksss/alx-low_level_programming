#include "main.h"
#include <stdio.h>

/* _putchar function declaration statement */
int _putchar(char c);

/**
 * print_line - Entry point
 * @n: parameter
 */
void print_line(int n)
{
	int i;


	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
			while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}

int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}

/* _putchar function declaration statement */
int _putchar(char c)
{
	return putchar(c);
}
