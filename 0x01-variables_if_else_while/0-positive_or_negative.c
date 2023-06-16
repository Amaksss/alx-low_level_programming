#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this program will assign random numbers to the variable
 * Return: 0 (succcess)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

return (0);
}
