#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @s: string
 * Return: void
 */
void puts_half(char *s)
{
int h = 0;
int k;
while (s[h] != '\0')
{
h++;
}
if (h % 2 == 1)
{
k = h - 1) / 2;
k += 1;
}
else
{
k = h / 2;
}
for (; k < h; k++)
{
putchar(s[k]);
}
putchar('\n');
}
