#include "main.h"

/**
 * _abs - entry point
 *
 * @n: returns intiger
 *
 * Description: function computes the absolute
 * value of an intiger
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{

	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}


}
