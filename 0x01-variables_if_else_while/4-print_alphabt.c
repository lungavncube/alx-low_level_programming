#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints
 * the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 *
 * Return: Always 0 (success)
*/

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');

return (0);

}
