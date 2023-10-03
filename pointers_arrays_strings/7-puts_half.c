#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints second half of string.
 *
 * @str: string used to print half of.
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len - 1) / 2;

	n++;

	while (str[n] != 0)
	{
		putchar(str[n]);
		n++;
	}

	putchar('\n');
}
