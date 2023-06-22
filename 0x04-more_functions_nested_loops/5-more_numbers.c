#include "main.h"
#include <stdio.h>

/**
 * more_numbers - entry point
 * followed by a new line
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i < 11; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			for (int j = 0; j < 10; j++)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
	}
}
