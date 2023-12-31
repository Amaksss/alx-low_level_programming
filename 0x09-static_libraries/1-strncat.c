#include "main.h"
/**
 * *_strncat - Function that concatenates two strings
 * usiing at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: third parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
