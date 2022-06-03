#include <stdio.h>

/**
* main - prints alphabet in lowercase and uppercase
* Return: 0
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';
	while (a <= 'Z')
	{

		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
