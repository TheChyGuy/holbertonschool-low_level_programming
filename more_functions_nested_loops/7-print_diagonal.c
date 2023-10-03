#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal.
 *
 * @n: input passed to print_diagonal.
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
