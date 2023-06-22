#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 * @c: parameter
 * Return: Always 0
 */

int _isupper(int c)
{

	if (c <= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
