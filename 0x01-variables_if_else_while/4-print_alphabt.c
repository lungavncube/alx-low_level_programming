#include <stdio.h>

/**
 * main -entry point
 *
 * Description: program prints alphabets except 'q' and 'e'
 *
 * Return: Always 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
