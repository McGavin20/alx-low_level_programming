#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a, b - two integers
 * Return: 0 Always
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
	a = *a;
	b = *b;
}
