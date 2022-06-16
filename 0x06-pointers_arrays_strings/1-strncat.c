#include <stdio.h>
#include "main.h"

/**
* _strlen - returns length of a string
* _strncat - concatenates two strings
* @dest: string to be appended
* @src: pointer to a string
* @n: number of elements to append
* Return: concatenated string
*/

int _strlen(char *str)
{
	int length = 0;

	while (*str)
	{
		str++;
		length++;
	}

	return (length);

}



char *_strncat(char *dest, char *src, int n)
{
	char *append = dest + _strlen(dest);
	int length;

	if (n > _strlen(src) + _strlen(dest))
		length =  _strlen(dest) + _strlen(src);
	else
		length = _strlen(dest) + n;

	while (*src && n > 0)
	{
		*append += *src;
		src++;
		append++;
		n--;
	}
	if (n > 0)
	*append += '\0';
	append -= (length);
	*dest = *append;

	return (append);
}
