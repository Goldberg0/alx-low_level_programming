#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: character to check
 * Return: 0 or 1
 */


int _idigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
