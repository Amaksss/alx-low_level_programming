#include "main.h"
/**
 * _puts - entry point
 * @str: parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putcar('\n');
}
