#include <stdio.h>

/**
 * main - prints various sizes of data types
 * Return: 0 (success)
 */

int main(void)
{
	int x = 1;
        int y = 4;
	int z = 8;

	printf("Size of a char: %i byte(s)\n", x);
	printf("Size of an int: %i byte(s)\n", y);
	printf("Size of a long int: %i byte(s)\n", y);
	printf("Size of a long long int: %i byte(s)\n", z);
	printf("Size of a float: %i byte(s)\n", y);

	return (0);
}
