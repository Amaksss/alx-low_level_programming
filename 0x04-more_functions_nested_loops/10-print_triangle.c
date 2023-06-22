#include "main.h"
#include <stdio.h>

/**
 * print_triangle - entry point
 * @size: parameter
 * followed by a new line
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
			_putchar('\n');
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
	}
}
