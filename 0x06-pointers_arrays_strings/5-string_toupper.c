#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to be worked on
 * Return: capitalized string
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
    s++;
	}
	return (p);
}
