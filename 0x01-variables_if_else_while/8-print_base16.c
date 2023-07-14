#include <stdio.h>
/**
 * main - program to print numbers of base 16 in lowercase
 * Return: 0 (BIG wIN)
 */
int main(void)
{
char f;
int k;
k = 0;
f = 'a';
while
(k <= 9)
{
putchar(k + '0');
k++;
}
while
(f <= 'f')
{
putchar(f);
f++;
}
return (0);
}
