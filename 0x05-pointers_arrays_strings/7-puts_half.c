#include "main.h"
/**
 * _strlen - prints half of a string, followed by a new line
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
