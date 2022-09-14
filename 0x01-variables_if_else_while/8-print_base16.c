#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all numbers of bas 16 in ;ower case,
 * only using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char c;

	for (c = '0'; c <= '9'; c++)
	putchar(c);

	for (c = 'a'; c <= 'f'; c++)
	putchar(c);

	putchar('\n');

return (0);
}
