#include "main.h"
/**
 * print_last_digit  - prints last digit of a number
 * n: int to show last digit was from
 * RETURN: value of last digit
 */
int print_last_digit(int)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10;

	if (x < 10)
	       x = -x;
	

	_putchar(x + '0');

	return (x);
}	
