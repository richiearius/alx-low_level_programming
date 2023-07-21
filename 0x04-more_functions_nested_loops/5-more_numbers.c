#include "main.h"
/**
 * more_numbers - print 10 times the numbers, from 0 to 14,new line
 * Return: 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
int h, k;
for (h = 0; h < 10; h++)
{
for (k = 0; k <= 14; k++)
{
if (k > 9)
{
_putchar((k / 10) + '0');
}
_putchar((k % 10) + '0');
}
_putchar('\n');
}
}
