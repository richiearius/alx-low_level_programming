#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lower case except q and e, followed by a new line.
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
