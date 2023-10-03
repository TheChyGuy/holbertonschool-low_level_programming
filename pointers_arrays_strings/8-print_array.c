#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a certain number of values.
 *
 * @a: array being printed.
 *
 * @n: amount of elements printed.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
