#include <stdio.h>
/**
 * main -  program to print all possible combinations of single numbers
 * Return: 0 (BIG WIN)
 */
int main(void)
{
int u;
for (u = 0; u < 10; u++)
{
putchar(u + '0');
if (u < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
