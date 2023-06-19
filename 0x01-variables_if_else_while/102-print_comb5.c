#include <stdio.h>
/**
 * main - prints all possible combinations of two digit numbers
 * Return: 0 (success)
 */

int main(void)
{
int i, j, k, l;

for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
for (k = 0; k < 100; k++)
{
for (l = 0; l < 100; l++)
{
if (((k + l) > (i + j) && k >= i) || i < k)
{

putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);

if (i + j + k + l == 227 && i == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}

putchar('\n');
return (0);
}
