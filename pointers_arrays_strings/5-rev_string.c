#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 *
 * @s: string to be gotten rid of.
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i, j;
	char a;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
}
