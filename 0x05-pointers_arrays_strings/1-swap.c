#include "main.h"
/**
 * swap_int - write the function that swaps the value of 2 integers
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
