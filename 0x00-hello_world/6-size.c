#include <stdio.h>
/**
 * main- entry point
 * print various data types sizes
 * warnings are allowed
 * return 0 at the end
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a float: %d bytes\n", sizeof(float));
	return (0);
}
