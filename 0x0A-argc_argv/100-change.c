#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change - gives the difference between input and n
 * @chg : change value
 * Return: min num of coins
 */
int change(int chg)
{
	int dough = 0;

	while (chg)
	{
		if (chg >= 25)
			chg -= 25;
		else if (chg >= 10)
			chg -= 10;
		else if (chg >= 5)
			chg -= 5;
		else if (chg >= 2)
			chg -= 2;
		else if (chg >= 1)
			chg -= 1;
		dough++;
	}
	return (dough);
}

/**
 * main - prints the difference
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int diff;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	diff = atoi(argv[1]);
	if (diff < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%i\n", change(diff));
	return (0);
}
