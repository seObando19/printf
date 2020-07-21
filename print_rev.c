#include "holberton.h"
/**
   *print_rev - print reverse of string
   *@params:arguments to print
   *Return:string reverse
 */
int print_rev(va_list params)
{
	int i = 0,lenght = 0;
	char *ptr;

	ptr = va_arg(params, char*);
	if (ptr != NULL && ptr != 0)
	{
		while (ptr[i] != '\0')
			i++;
		i--;
		while(i >= 0)
		{
			_putchar(ptr[i]);
			lenght++;
			i--;
		}
		return (lenght);
	}
	return (write(1, "(null)", 6));
}
