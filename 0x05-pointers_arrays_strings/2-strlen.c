#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string variable
 * 
 * Return: len
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
