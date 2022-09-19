#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - takes a pointer to an int
 * @*n: integer parameter of 98
 * Return: 0 Always
 */

void reset_to_98(int *n)
{
	int n = 98;

	*n = &n;

	_putchar("The value of n: %d\n", *n);
	
	return (0);
}
