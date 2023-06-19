#include <stdio.h>
/**
 * main - Entry
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (i = 'A'; i <= 'Z'; i++)
		{
			putchar(i + 'a');
			putchar(i + 'A');
		}
	}
	putchar('\n');
	return (0);
}

