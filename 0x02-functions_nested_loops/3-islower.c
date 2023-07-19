#include "main.h"
/**
 * _islower - checks for lowercase character
 * @p: charcater to be checked
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int p)
{
if (p >= 97 && p <= 122)
{
return (1);
}
return (0);
}
