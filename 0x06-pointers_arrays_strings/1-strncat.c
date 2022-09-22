#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: integer
 *
 * Return: dest of string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
        int y = 0;

	while (dest[x] != '\0')
		x++;

	for (y = 0; y < n && src[j] != '\0'; y++, x++)
		dest[x] =  src[y];

	dest[y] = '\0';
	return (dest);
}
