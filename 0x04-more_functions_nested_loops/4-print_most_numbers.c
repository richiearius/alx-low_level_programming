#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9, new line
 * Description: ptints from 0 to 9 except 2 & 4
 * Return: numbers from 0 to 9
 */
void print_most_numbers(void)
{
int v = 0;
for (; v <= 9; v++)
{
if (v == 2 || v == 4)
{
continue;
}
else
{
_putchar(v + '0');
}
}
_putchar('\n');
}
