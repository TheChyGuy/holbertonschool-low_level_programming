#include "main.h"

/**
 * print_triangle - prints triangle.
 *
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	int spaces;
	int rows;

	if (size > 0)
	{
		for (spaces = 1; spaces <= size; spaces++)
		{
			for (rows = 1; rows <= size; rows++)
			{
				if ((spaces + rows) > size)
				{
					putchar(35);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
