#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a, b - two integers
 * Return: 0 Always
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int *a = *b;
	int *b = x;
}
