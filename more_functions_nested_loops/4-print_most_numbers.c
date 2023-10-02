#include "main.h"

/**
 * print_most_numbers - prints almost all numbers from the selected set of numbers.
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
