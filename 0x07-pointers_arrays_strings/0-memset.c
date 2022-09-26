#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string pointer
 * @b: character
 * @n: unsigned integer
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for ( ; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);

}
