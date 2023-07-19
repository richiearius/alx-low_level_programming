#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @b: character to be checked
 * Return: 1,0,-1 and prints + if n > 0, 0 if n = 0 and - of n < 0 respectively
 */
int print_sign(int b)
{
if (b > 0)
{
_putchar(43);
return (1);
}
else if (b < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
