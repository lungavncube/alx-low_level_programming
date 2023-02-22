#include <stdio.h>

/**
 * main - entry point
 *
 * Description: rint all single digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
