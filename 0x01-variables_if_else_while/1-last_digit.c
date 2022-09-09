#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -print last digit of random number
 * store number in variable n
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (n % 98 > 5)
		printf("and is greater than 5\n");
	else if (n % 980 == 0)
		printf("and is 0\n");
	else if (n % -98 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
