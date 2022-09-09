#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the alphabet
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
