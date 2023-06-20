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
		putchar(i);
	}
	if (i != 98)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
