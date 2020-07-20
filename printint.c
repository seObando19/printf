#include "holberton.h"
/**
  *print_integer - function for print the numbers
  *according to the format
  *@params:arguments to print
  *Return:number of chars and digits printed
*/
int print_integer(va_list params)
{
	int integer = va_arg(params, int);
	int lengthi = 0;
	unsigned int num = 0;
	int mult = 1;

	if (integer < 0)
	{
		lengthi = _putchar('-');
		num = integer * -1;
	}
	else
		num = integer;
	while (num / mult >= 10)
	{
		mult = mult * 10;
	}
	while (mult != 0)
	{
		lengthi = _putchar('0' + num / mult);
		num = num % mult;
		mult = mult / 10;
	}
	return (lengthi);
}
