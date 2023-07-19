#include "main.h"
/**
 * int_abs - computes the absolute value of an integer
 * @j: character to be checked
 * return: absolute value of number
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
