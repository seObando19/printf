#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
  *print_char - print to char passed in params
  *@params:arguments to print
  *Return: value to printed
*/
int print_char(va_list params)
{
	char m;

	m = (char) va_arg(params, int);
	return (write(1, &m, sizeof(char)));
}
/**
  *print_string - print to string passed in params
  *@params:arguments to print
  *Return: string to printed
*/
int print_string(va_list params)
{
	int i;
	char *ptr;
	int len = 0;

	ptr = va_arg(params, char *);
	if (ptr != NULL)
	{
		for (i = 0; ptr[i + 1] != '\0'; i++)
		{
			len++;
		}
		return (write(1, ptr, len));
	}
	return (write(1, "(null)", 6));
}
