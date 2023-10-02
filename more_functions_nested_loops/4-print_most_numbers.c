#include "main.h"

/**
 * print_most_numbers - prints almost all numbers from 0-9, but not 2 and 4.
 */

void print_most_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
}
