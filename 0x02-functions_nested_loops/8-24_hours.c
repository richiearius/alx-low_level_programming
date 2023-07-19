#include "main.h"
/**
 * jack_bauer - prints every minute of day of Jack Bauer from 00:00 to 23:59
 * Return: every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int m, n, q, p;
for (m = 0; m <= 2; m++)
{
for (n = 0; n <= 9; n++)
{
if ((m <= 1 && n <= 9) || (m <= 2 && n <= 3))
{
for (q = 0; q <= 5; q++)
{
for (p = 0; p <= 9; p++)
{
_putchar(m + '0');
_putchar(n + '0');
_putchar(58);
_putchar(q + '0');
_putchar(p + '0');
_putchar('\n');
}
}
}
}
}
}
