#include<stdio.h>
/**
 * main - prints different digit combinations
 * Return: 0 Always (Success)
 */
int main(void)
{

	int x;
	int y;

	for (x = 10; x <= 19; x++)
	{
		for (y = 10; y <= 19; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			if (x != 19 || y != 19)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
