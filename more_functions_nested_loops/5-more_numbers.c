#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, times 10.
 */

void more_numbers(void)
{
	int i;
	int target;

	i = 0;
	target = 0;

	while (target <= 9)
	{
		while (i <= 14)
		{
			if (i >= 10)
			{
				putchar('0' + (i / 10));
			}
			putchar('0' + (i % 10));
			i++;
		}
		i = 0;
		target++;
		putchar('\n');
	}
}
