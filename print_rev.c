#include "holberton.h"
/**
   *print_rev - print reverse of string
   *@params:arguments to print
   *Return:string reverse
 */
int print_rev(va_list params)
{
	int i = 0, a, lenght = 0;
	char *ptr, *newStrg;

	ptr = va_arg(params, char*);
	while (ptr[i] != '\0')
		i++;
	lenght = i;
	newStrg = malloc(sizeof(char) * lenght + 1);
	if (newStrg != NULL)
	{
		for (a = 0; a <= i; a++)
		{
			newStrg[a] = ptr[lenght];
			lenght--;
		}
		write(1, newStrg, a);
		free(newStrg);
		return (a);
	}
	return (write(1, "(null)", 6));
}
