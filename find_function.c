#include "holberton.h"
/**
  * find_function - function pointer for
  *search function to execute
  *@letter: format for print value
  *Return: value printed for the function called
*/
int (*find_function(char letter))(va_list list)
{
	_formats ops[] = {
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
			return (ops[i].function);x
		}
	}
	return (0);
}
