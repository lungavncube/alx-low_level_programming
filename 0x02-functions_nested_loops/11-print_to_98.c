#include "main.h"

/**
 *print_to_98 - entry point
 *
 *@n: pints intiger
 *
 * Description: prints all natural numbers from n t0 98
 *
 * Return: void
 */

void print_to_98(int n)
{

	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
