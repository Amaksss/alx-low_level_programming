#include "main.h"
/**
 * _islower - Entry point
 * @c: parameter
 * Return: 0(success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
