#include "main.h"
#include <stdio.h>

/**
 * main - prints highest prime of 612852475143
 * Return: 0
 */
int main(void)
{
	int i = 2;
	long n = 612852475143;


	while (i < n)
	{
		while ((n % i == 0) && (n != i))
			i++;
	}

	printf("%lu\n", n);
	return (0);
}
