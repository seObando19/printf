#include "holberton.h"

/**
  *
  *
  *
*/
int _printf(const char *format, ...)
{
	va_list list;
	int cont = 0, i;

	if (format == NULL)
	{
		return (-1);
	}
  	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				cont += _putchar('%');
			}
			else if (valid_format(format[i]))
			{
				cont += find_function(format[i])(list);
			}
			else if (format[i] != '\0')
			{
				cont += _putchar('%') + _putchar(format[i]);
			}
			else if (format[i] == '\0')
			{
				return (-1);
			}
			else
			{
				cont += _putchar('%');
			}
		}
		else
		{
			cont += _putchar(format[i]);
		}
	}
	va_end(list);
	return (cont);
}
/**
  *
  *
  *
*/
int valid_format(char c)
{
	return ('c' == c || 's' == c || 'd' == c
	|| 'i' == c);
}