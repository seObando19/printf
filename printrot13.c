#include "holberton.h"
#include <stdlib.h>
/**
 * print_rot13 - prints a string in rot13
 * @params:arguments to print
 * Return: number of chars printed
 */

int print_rot13(va_list params)
{
	char *ptr;
	unsigned int i, j;
	int cont;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	ptr = va_arg(params, char *);
	if (ptr == NULL)
	{
                ptr = "(ahyy)";
        }
	for (i = 0; ptr[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == ptr[i])
			{
				_putchar(output[j]);
				cont++;
				break;
			}
		}
		if (!input[j])
		{
			_putchar(ptr[i]);
			cont++;
		}
	}
	return (cont);
}
