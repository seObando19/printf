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
	cont = (valid_format(format, i));
	return (cont);
}
/**
  *
  *
  *
*/
int valid_format(const char *format, int i)
{
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				cont += _putchar('%');
			}
			else if(format[i] == 's' || format[i] == 'c')
			{
				cont += _putchar(format[i + 1]);
			}
		}
		else
			cont += _putchar(format[i]);
	}
	return (cont);
}