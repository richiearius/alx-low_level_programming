#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory storage location
 * @src: where memory is copied
 * @n: number of bytesi
 * Return: copied memory with changeed n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int p = 0;
int i = n;
for (; p < i; p++)
{
dest[p] = src[p];
n--;
}
return (dest);
}
