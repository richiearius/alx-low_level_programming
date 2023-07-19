#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @e: character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if not
 */
int _isalpha(int e)
{
	if ((e >= 97 && e <= 122) || (e >= 65 && e <= 90))
	{
	return (1);
	}
	return (0);
}
