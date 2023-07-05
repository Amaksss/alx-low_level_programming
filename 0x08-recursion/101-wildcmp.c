#include "main.h"
/**
 * wildcmp - compares to string
 * @s1: input value
 * @s2: input value
 * Return: 1 if identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{

	if (s1 == '\0' && s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return wildcmp (s1 +1, s2 + 1);
	}
	else 
	{
		return (0);
	}
}
