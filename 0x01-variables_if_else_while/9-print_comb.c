#include<stdio.h>
/**
 * main - prints all possible digit combinations
 * Return: 0 Always (Succcess)
 */
int main(void)
{
	int x;

	for (x = 10; x < 20; x++)
	{
		putchar((x % 10) + '0');
		if (x != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
