#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
int lonfi = 0;
int o;
while (*s != '\0')
{
longi++;
s++;
}
s--;
for (o = longi; o > 0; o--)
{
putchar(*s);
s--;
}
putchar('\n');
}
