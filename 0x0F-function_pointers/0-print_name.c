<<<<<<< HEAD
#include "function_pointers.h"
=======
#include "functions_pointers.h"
>>>>>>> cd788b8fc0be3897d6c10f038d7af422541dcef7
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 */
<<<<<<< HEAD

=======
>>>>>>> cd788b8fc0be3897d6c10f038d7af422541dcef7
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
