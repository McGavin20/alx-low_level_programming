#include<stdio.h>
#include<stdlib.h>
/**
 * main - print lower and uppercase alphabet
 * Return: 0 Always (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
