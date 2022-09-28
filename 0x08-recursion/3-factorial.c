#include "main.h"
/**
 * factorial - of a given number
 * @n: integer
 *  Return: 0 when true
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	_putchar (n + factorial(n - 1));
	_putchar (n);
}
