#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @k: chracter to be checked
 * Return: 1 if c is a digi and 0 if not
 */
int _isdigit(int k)
{
if (k >= 48 && k <= 57)
{
return (1);
}
return (0);
}
