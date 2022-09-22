#include "main.h"
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

	while (dest[x])
		y++;

	for (x = 0; src[x] && x < n; x++)
		dest[y++] =  src[x];

	retrun (dest);
}
