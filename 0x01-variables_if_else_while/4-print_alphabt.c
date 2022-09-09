#include<stdlib.h>
#include<stdio.h>
/**
 * main - prints alphabet in lowercase
 * Return: 0 Always (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
