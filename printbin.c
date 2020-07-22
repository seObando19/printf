#include "holberton.h"
#include <stdlib.h>
/**
 * print_bin - prints a string in bin
 * @list:arguments to print
 * Return: number of chars printed
 */

int print_bin(va_list list)
{
	unsigned int integer;
	int out[64];
	int i = 0, j = 0;
	int cont = 0;

	integer = va_arg(list, int);
	if (integer == 0)
	{
		_putchar('0' + 0);
		cont++;
		return (cont);
	}

	while (integer >= 1)
	{
		if (integer % 2 == 0)
		{
			out[i] = 0;
			integer = integer / 2;
			i++;
		}
		else
		{
			out[i] = 1;
			integer = integer / 2;
			i++;
		}
		}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + out[j]);
		cont++;
	}
	return (cont);
}
