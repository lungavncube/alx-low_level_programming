#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description:
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');

	return (0);
}
