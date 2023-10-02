#include "main.h"

/**
 * more_numbers - prints more numbers.
 */

void more_numbers(void)

{
	int x;
	int y;
	char c[] = "01234567891011121314";

	for (y = 0; y <= 19; y++)
	{
		for (x = 0; x <= 19; x++)
		{
			putchar(c[x]);
		}
		putchar('\n');
	}
}
