#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program will assign a random number
 * return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int n = (n % 10)

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n);
	}
return (0);
}
