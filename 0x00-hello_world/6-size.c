#include <stdio.h>
/**
 * main - prints the size of different data types
 * Return: 0 to exit properly
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long in: %d bytes\n", sizeof(long long int));
	printf("Size of a float: %d bytes\n", sizeof(float));
	return (0);
}
