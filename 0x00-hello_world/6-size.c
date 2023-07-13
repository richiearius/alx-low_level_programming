#include <stdio.h>
/**
 * main -  program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (BIG WIN)
 */
int main(void)
{
	char e;
	int d;
	long int c;
	long long int b;
	float a;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
return (0);
}
