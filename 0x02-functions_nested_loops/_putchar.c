#include <unistd.h>

/** 
 * _puthcar - prints char c to stdout
 *
 * @c: character printed
 *
 * Return: 1 on success
 * -1 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
