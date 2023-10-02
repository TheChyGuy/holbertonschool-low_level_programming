#include "main.h"

/**
 * print_line - prints a stright line in the terminal.
 *
 * @n: input sent to print_line.
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}

	else if (n <= 0)
	{
		putchar('\n');
	}
}
