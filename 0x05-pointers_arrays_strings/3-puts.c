#include "main.h"
/**
 * _putchar - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _putchar(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
