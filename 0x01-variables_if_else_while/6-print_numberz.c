#include <stdio.h>
/**
 * main - print single digits with putchar
 * Return: 0 (success)
 */
int main(void)
{
int i;


for (i = 0; i < 10; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}