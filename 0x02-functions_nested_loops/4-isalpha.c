#include "main.h"

/**
 * _isalpha - Entry point
 * @c: parameter
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c < 'A' || c > 'z')
	{
		return (0);
	}
	return (1);
}
