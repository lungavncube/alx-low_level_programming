#include <stdio.h>

/**
 * main - entry point
 * 
 * Description: program prints all possible
 * different combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	i = 48;
	j = 48;
	while ((i < 5) && (j == 57))
	{
		putchar(i);
		putchar(j);
		if ((i == 57) && (j == 57))
		{
			putchar('\n');
			i++;
			j++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if(j < 57)
			{
				j++;
			}
			else
			{
				j = 48;
				i++;
			}
		}
	}

	return (0);

}
