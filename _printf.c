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
<<<<<<< HEAD
			{
				cont += _putchar('%');
			}
=======
				cont += _putchar('%');  /*Escribe '%' y le suma 1 a cont*/
>>>>>>> d08df186defd783782c241b46209ead610793d48
			else if(format[i] == 's' || format[i] == 'c')
				cont += _putchar(format[i + 1]);
		}
		else
			cont += _putchar(format[i]);
	}
	return (cont);
}