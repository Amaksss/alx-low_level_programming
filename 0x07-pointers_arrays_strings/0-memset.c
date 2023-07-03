#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: starting address of the memory to be filled
 * @b: byte value you want to set
 * @n: number of bytes you want to fill
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
