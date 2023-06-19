#include <stdio.h>
/**
 * main - this program prints three digit combinations
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i > j > k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
