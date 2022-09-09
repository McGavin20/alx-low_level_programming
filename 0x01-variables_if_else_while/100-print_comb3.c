#include<stdio.h>
/**
 * main - prints different digit combinations
 * Return: 0 Always (Success)
 */
int main(void)
{

	int x, y;

	for (y = 10; y <= 18; y++)
	{
		for (x = 11; x <= 19; x++)
		{	
			if (x > y)
			{
				putchar(y);
				putchar(x);
				if (y != 18 || x != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
