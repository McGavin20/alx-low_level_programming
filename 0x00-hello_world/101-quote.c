#include <stdio.h>
#include <unistd.h>
/*
 * main - print the phrase "and that piece of art is useful"
 *
 *  - Dora Korpar, 2015-10-19,
 *
 * write used to call out the phrase followed by new line
 *
 * Return: 0 when code is a success
 */
int main(void)
{
	write("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return(0);
}
