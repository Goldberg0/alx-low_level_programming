#include "main.h"

/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */


void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = '0'; c <='15'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
