#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful 
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%i\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
