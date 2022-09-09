#include<stdio.h>
/**
 * main - prints different digit combinations
 * Return: 0 Always (Success)
 */
int main(void)
{

	int x;
	int y;

	for (y = 10; y <= 19; y++)
	{
		for (x = 11; x <= 20; x++)
		{	
			if(x > y)
			{
				putchar(y);
				putchar(x);
				if (y != 19 || x != 20)
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
