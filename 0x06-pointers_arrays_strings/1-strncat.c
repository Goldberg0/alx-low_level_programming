#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * _strcat - concatenates two strings
 * @dest: string to be appended
 * @src: pointer to a string
 * @n - number of bytes to be appended
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
	int length;
  
  if(n > _strlen(src) + _strlen(dest))
    length = _strlen(dest) + _strlen(src);
  else
    length = _strlen(dest) + n;
      

	while (*src > 0) && (n > 0)
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
