#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase, new lin
 * Return: 0 (BIG WIN)
 */
void print_alphabet_x10(void)
{
char h;
int f = 0;
while (f <= 9)
{
for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar('\n');
f++;
}
}
