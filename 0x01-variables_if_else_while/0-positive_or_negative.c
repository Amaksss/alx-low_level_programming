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

printf("%d \n", n);

if (n > 0) 
{
printf("The number: %d is positive\n", n);
}
else if (n < 0)
{
printf("The number: %d is negative\n", n);
}
else
{
printf("The number: %d is zero\n", n);
}

return (0);

}
