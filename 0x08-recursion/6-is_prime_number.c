#include "main.h"

/**
 * Prime_num - checks if number is prime
 * @i: input number
 * @j: probable prime number
 * Return: 1 if true, 0 if false
 */

int Prime_num(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (Prime_num(i + 1, j));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (Prime_num(2, n));
}
