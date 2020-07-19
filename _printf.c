#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

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
		if (format[i] == "%")
		{
			i++;
			if (format[i] == "%")
			{
				cont += _putchar('%');  /*Escribe '%' y le suma 1 a cont*/
			}
		}
	}
	return (count);
}
/**
  *
  *
  *
*/
int valid_format(const char *format, int i)
{
	
}