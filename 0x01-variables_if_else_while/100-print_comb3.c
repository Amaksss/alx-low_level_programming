#include <stdio.h>
/**
 * main - program prinys all possible different combinations of two digits
 * Return: 0 (success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; ++x)
{
	for (y = 0; y < 10; ++y)
	{
			putchar(x + '0');
			putchar(y + '0');
			if (y > x)

{
	putchar(' ');
}

}
putchar('\n');

return (0);
}
