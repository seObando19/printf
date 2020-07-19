#include "holberton.h"

int (*find_function(char letter))(va_list list)
{
	_formats ops[] ={
		{'c', print_char},
		{'s', print_string},
		{'i', print_integer},
                {'d', print_integer}
	};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ops[i].format == letter)
		{
			return (ops[i].function);
		}
	}
	return (0);
}