#include <stdio.h>
/**
 * main - prints lower and uppercase characters follwed by a new line
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
