#include <stdio.h>
/**
 * main - program to print alphabet in lower case except q & e then a new line
 * Return: 0 (BIG WIN)
 */
int main(void)
{
char y;
y = 'a';
while
(y <= 'z')
{
if ((y != 'q' && y != 'e') && y <= 'z')
{
putchar(y);
}
y++;
}
putchar('\n');
return (0);
}
