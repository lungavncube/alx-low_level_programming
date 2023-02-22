#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program prints the alphabet
 * in lowercase using 'putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char c ='a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
