#include "main.h"

/**
 * isSqrt - checks square root of a number
 * @n: probable square root
 * @i: integer to find square root of
 * Return: square root of number
 */

int isSqrt(int z, int a)
{
	if (a * a > z)
		return (-1);
	if (a * a == z)
		return (a);
	return (isSqrt(z, a + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: square root of number or -1 if false
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isSqrt(n, 1));
}
