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


#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (always)
 */
int main(void)
{
	int n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}