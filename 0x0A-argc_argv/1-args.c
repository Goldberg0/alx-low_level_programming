#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j = 0;

	while (--argc)
		j++;
	printf("%i\n", j);
	return (0);
}
