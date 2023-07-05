#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: given number
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * !(n - 1));
}
