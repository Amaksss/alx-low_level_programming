#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this program will assign random numbers to the variable
 * Return: 0 (succcess)
 */

int main()
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d \n", n);

if (n > 0) {
printf("The number is positive\n");
}
else if (n < 0) {
printf("The number is negative\n");
}
else {
printf("The number is zero\n");
}

return (0);

}
