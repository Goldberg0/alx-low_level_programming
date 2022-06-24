#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change - gives the difference between 
 * @chg : target change value
 * Return: min num of coins
 */
int change(int n)
{
	int dough = 0;

	while (n)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
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
  
	diff = atoi(argv[1]);
	if (diff < 0)
	{
		printf("0\n");
		return (0);
	}
  
	if (argc != 2)
	{
		printf("Error\n");
		return (0);
  }
	printf("%i\n", change(diff));
	return (0);
}
