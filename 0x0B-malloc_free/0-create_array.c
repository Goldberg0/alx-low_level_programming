#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: size of array
 * @c: char in focus
 * Return: pointer string of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || !str)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
