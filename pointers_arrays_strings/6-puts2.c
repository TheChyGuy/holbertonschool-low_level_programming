#include "main.h"

/**
 * puts2 = starting point.
 *
 * @str: the str that's skipped though.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i = i + 1;
	}
	putchar('\n');
}	
