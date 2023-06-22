#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * @num: parameter
 * Return: 0 (success)
 */
int isprime(long num)
{
	long i;

	if (num < 2)
	{
		return (0);
	}

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int main(void)
{
	long number = 612852475143;
	long largestprimefactor = 0;

	long i;

	for (i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0 && isprime(i))
		{
			largestprimefactor = i;
		}
	}
	printf("%ld\n", largestprimefactor);
	return (0);
}
