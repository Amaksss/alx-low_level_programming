#include <stdio.h>
/**
 * main - This program prints all possible combination of single digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; ++x)
{

	putchar(x + '0');
	if (x < 9)
{
	putchar(',');
	putchar(' ');
}

}
putchar('\n');

return (0);
}
