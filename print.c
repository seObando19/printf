#include "holberton.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_char(va_list params)
{
	char m;

	m = (char) va_arg(params, int);
	return (write(1, &m, sizeof(char)));
}

int print_string(va_list params)
{
	int i;
	char *ptr;
	int save;

	ptr = va_arg(params, char *);
	for (i = 0; ptr[i] != '\0'; i++)
	{
		save += _putchar(ptr[i]);
	}
	return (save);
}
