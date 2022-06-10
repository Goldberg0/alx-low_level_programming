#include <stdio.h>

/**
 * main - prints numbers 0-100
 * prints "Fizz" for numbers divisible by 3,
 * prints "Buzz" for numbers divisible by 5,
 * prints "FizzBuzz" for numbers divisible by 3 and 5
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
	printf("Buzz\n");
	return (0);
}
