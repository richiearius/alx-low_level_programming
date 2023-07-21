#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ should be printed
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
int k, l;
if (n <= 0)
{
_putchar('\n')
}
else
{
for (k = 0; k < n; k++)
{
for (l = 0; l < k; l++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
