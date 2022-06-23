#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * Palcheck - checks if string is palindrome
 * @s: string
 * @i: index
 * @j: end index
 * Return: 1 if true, 0 if false
 */

int Palcheck(char s[], int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (Palcheck(s, i + 1, j - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int a;

	a = _strlen_recursion(s) - 1;

	return (Palcheck(s, 0, a));
}
