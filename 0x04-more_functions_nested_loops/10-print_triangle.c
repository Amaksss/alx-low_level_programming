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
			printf('#');
		}
		if (size <= 0)
		{
			printf('\n');
		}
	}
}
