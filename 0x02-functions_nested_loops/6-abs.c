#include "main.h"

/**
 * _abs - Entry point
 * @c: parameter
 * Return: it returns absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c / -1);
	}
	return (c);
}
