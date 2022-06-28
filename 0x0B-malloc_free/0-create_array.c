#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it
 * @size - size of the array
 * @c - char to be filled in array
 * Return - a pointer to array if successful else NULL
 */

char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *str;

    str = malloc(sizeof(char) * size);
    if (size == 0 || !str)
    {
        return (NULL);
    }

    for( i = 0; i < size; i++)
        str[i] = c;
    return (str);
}