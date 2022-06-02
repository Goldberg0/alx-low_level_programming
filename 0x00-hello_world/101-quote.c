#include<stdio.h>
/**
*main - Printing strings
*print strings to standard error
* Return: 1
*/
int main(void)
{
char yo [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fprintf(stderr, "%c\n", yo);
return (1);
}
