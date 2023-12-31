#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout.
 *
 * @str: the string that's printed.
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
