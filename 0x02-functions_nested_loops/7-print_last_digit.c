#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @t: character to be checked
 * Return: last digit of a number
 */
int print_last_digit(int t)
{
int last;
last = t % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
