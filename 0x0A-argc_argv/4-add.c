#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
				if (isdigit(argv[i][j]) == 0)
					return (printf("Error\n"), 1);
			sum += atoi(argv[i]);
		}
	printf("%i\n", sum);
	return (0);
}
