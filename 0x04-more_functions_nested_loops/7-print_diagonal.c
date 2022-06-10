#include "main.h"
/**
 * print_diagonal - print a diagonal line of n length
 * @n: length of line
 */
void print_diagonal(int n)
{
	int i = 0, h;

	if (n > 0)
	{
		while (i < n)
		{
			for (h = 0; h < i; h++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
