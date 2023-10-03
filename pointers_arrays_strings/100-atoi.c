#include "main.h"
#include <limits.h>

/**
 * _atoi - converts string to integer
 * @s: string passed to the function
 * Return: return integer result plus +/-
 */

int _atoi(char *s)
{
	int sign = 1;
	int 1 = 0;
	int result = 0;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
	{
		i++;
	}
	if (s[i] == '_' || s[i] == '+')
	{
		if (s[i] == '_')
		{
			sign = -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
