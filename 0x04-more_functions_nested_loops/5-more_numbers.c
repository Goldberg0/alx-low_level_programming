#include "main.h"

/**
 * more_numbers - prints (0-14) x10
 *
 * Return: void
 */


void more_numbers(void)
{
	char a, b, j, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
				b = j;
			else
			{
				a = j / 10; b = j % 10;
				_putchar('0' + a);
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}
