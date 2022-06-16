#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * _strcat - concatenates two strings
 * @dest: string to be appended
 * @src: pointer to a string
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



char *_strcat(char *dest, char *src)
{
	char *append = dest + _strlen(dest);
	int length =  _strlen(dest) + _strlen(src);

	while (*src)
	{
		*append += *src;
		src++;
		append++;
	}
	*append += '\0';
	append -= (length);
	*dest = *append;

	return (append);
}
