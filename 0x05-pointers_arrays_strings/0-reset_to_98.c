#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - entry point
 * @n: parameter
 * Return: void
 */

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n = 402;
	_putchar("n=%d\n", n);
	reset_to_98(&n);
	_putchar("n=%d\n", n);
	return (0);
}
