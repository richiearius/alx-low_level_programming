#include "main.h"
#include "stdio.h"
/**
 * main - prints Fizz Buzz program
 * Return: 0 (BIG WIN)
 */
int main(void)
{
int k;
for (k = 1; k <= 100; k++)
{
if ((k % 3 == 0) && (k % 5 == 0))
{
printf("FizzBuzz");
}
else if (k % 3 == 0)
{
printf("Fizz");
}
else if (k % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", k);
}
if (k != 0)
{
printf(" ");
}
}
{
printf("\n");
}
return (0);
}
