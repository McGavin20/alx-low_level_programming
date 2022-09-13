#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: check int
 * Return: 1 when success
 * print + if n is greater than zero
 * 0 prints zero when n is zero
 * -1 prints - when less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
