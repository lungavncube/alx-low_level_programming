#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Write a C program that prints exactly 
 * and that piece of art is useful\" - Dora Korpar, 
 * 2015-10-19, followed by a new line, to the standard error
 *
 * Return: Always return 1 (Success)
*/


int main(void)

{

	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
