#include "main.h"

/**
 * _islower - main entry
 *
 *@c: returns intiger
 *
 * Description: function checks for lowercase character
 *
 * Return: 0 or 1
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
