#include<stdio.h>
/**
* main - Print sizes
* Program to print sizes of variables
* Return: 0
*/
int main(void)
{
  printf("Size of char: %d bytes\n", (int)sizeof(char));
  printf("Size of int: %d bytes\n", (int)sizeof(int));
  printf("Size of long int: %d bytes\n", (int)sizeof(long int));
  printf("Size of long long int: %d bytes\n", (int)sizeof(long long int));
  printf("Size of float: %d bytes\n", (int)sizeof(float));
  return 0;
}
