/*
 * Size is not grandeur,
 * and territory does not make a nation task
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the size of various types
 * on the computer it is compiled and run on
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(unsigned int));
	printf("Size of a long long int: %ld byte(s)", sizeof(long int));		printf("Size of a float: %ld byte(s)", sizeof(long unsigned int));
	return (0);
}
