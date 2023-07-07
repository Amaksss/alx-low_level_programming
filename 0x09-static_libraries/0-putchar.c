#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character
 * Return: On success 1
 * On error, -1 is returned and errno is se approx
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
