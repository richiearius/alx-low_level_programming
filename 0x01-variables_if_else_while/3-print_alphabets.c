#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: 0 (BIG WIN)
 */
int main(void)
{
        int p;

	int t;

        p = 'a';
	t = 'A';
        while
                (p <= 'z') 
		{
                        putchar (p);
                        p++;	
                }
	while 
		(t <= 'Z')
		{
			putchar (t);
			t++;
		}
        putchar('\n');
        return (0);
}

