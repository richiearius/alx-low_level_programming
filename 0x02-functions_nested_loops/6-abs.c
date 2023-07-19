#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @j: character to be checked
 * Return: absolute value of a number or zero
 */
int _abs(int j)
{
if (j < 0)
{
int abs_val;
abs_val = j * -1;
return (abs_val);
}
return (j);
}
