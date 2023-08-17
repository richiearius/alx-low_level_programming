#include "main.h"
/**
 * _memset - filss a block of memory with a specific value
 * @s: start address for memory to be filled
 * @b: desired value
 * @n: amount of bytes to be changed
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsignedint n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
