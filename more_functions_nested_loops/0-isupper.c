#include "main.h"

/**
 * _isupper - determines if a given character is uppercase
 *
 * @c: a single character, to be determind as uppercase or not by function
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
