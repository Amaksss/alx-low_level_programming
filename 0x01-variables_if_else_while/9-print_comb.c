#include <stdio.h>
/**
 * main - This program prints all possible combination of single digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int x;
	while(x < 10)
	{
		putchar(x+'0');
	}
	if(x < 9)
	{
		putchar(',');
		putchar(' ');
	}
	x++;
	return (0);
}
