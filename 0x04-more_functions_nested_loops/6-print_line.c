#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines to draw
 * Return: empty
 */
void print_line(int n)
{
int k;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (k = 0; k < n; k++)
{
_putchar(95);
}
_putchar('\n');
}
}
