#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Program prints alphabets in lowercase and uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char c = 'a';
	char B = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (B <= 'Z')
	{
		putchar(B);
		B++;
	}
	putchar('\n');

	return (0);
}
