#include <stdio.h>
/**
 * main - this program prints hexadecimal numbers
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; ++x)
	{
		putchar(x + '0');
	}
	for (x = 0; x < 6; ++x)
	{
		putchar(x + 'a');
	}
putchar('\n');

return (0);
}