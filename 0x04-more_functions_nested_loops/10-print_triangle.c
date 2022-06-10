#include "main.h"

/**
 * print_triangle - print triangle of variable length
 * @size: triangle height
 */
void print_triangle(int size)
{
	int i, b;

	b = size;

	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		for (i = 1; i <= b; i++)
			_putchar('#')
		_putchar('\n');
		size--;
	}
}
